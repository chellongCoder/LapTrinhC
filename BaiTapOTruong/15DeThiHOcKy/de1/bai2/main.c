#include <stdio.h>
#include <stdlib.h>
char menu () {
    char key;
    printf("\n====================\n");
    printf("1. tao tep\n");
    printf("2. in tep\n");
    printf("====================\n");
    printf("moi ban chon lenh: ");
    key = getche();
    return key;
}
typedef struct {
    char ht[30];
    char qq[30];
    float diem;
}sinhvien;

sinhvien sv;
FILE *fp;
long size = sizeof(sinhvien); //kích thước của 1 sinh viên

void TaoTep () {
    char key;
    int i=1;
    fp = fopen("B_DIEM.c", "wb");
    while (1) {
        printf("\nban muon nhap sinh vien thu %d\n",i++);
        printf("nhap vao ho ten: ");
        fflush(stdin);
        gets(sv.ht);
        printf("nhap vao que quan: ");
        fflush(stdin);
        gets(sv.qq);
        printf("nhap vao diem: ");
        scanf("%f%*c",&sv.diem);
        fwrite(&sv, size, 1 , fp);
        printf("ban co muon nhap them sinh vien khong? (an EnTer de tiep tuc, an ESC de dung) \n");
        key = getche();
        if (key==27) {
            break;
        }
    }
    fclose(fp);
    fflush(fp);
}

void InTep () {
    int i=1;
    fp = fopen("B_DIEM.c","rb");
    if (fp==NULL) {
        printf("khong mo duoc tep\n");
        return;
    }
    printf("\ndoc tep thanh cmn cong!\n");
    printf("\t\t\t\tBANG DIEM=======\n");
    printf("%-30s %-30s %-30s %-30s\n","STT", "Ho Ten", "Que Quan", "Diem");
    while (fread(&sv, size, 1, fp)>0) {
        printf("%-30d %-30s %-30s %-30.2f\n",i++, sv.ht, sv.qq, sv.diem);
    }
    fclose(fp);
    fflush(fp);
}

void SuaTep () {
    char key;
    fp = fopen("B_DIEM.c", "r+b"); //đọc và ghi
    if (fp==NULL) {
        printf("deo mo duoc tep :))");
        return;
    }
    fseek(fp, 0 , SEEK_END); //đưa con trỏ về cuối
    long i,n;
    n = ftell(fp)/size; //số lượng sinh viên
    while (1) {
        printf("\n\nban muon sua sinh vien thu? (n<=%ld)",n);
        scanf("%ld%*c",&i);
        if (i>0 && i<=n) {
            fseek(fp, (i-1)*size, SEEK_SET); //là i-1 chứ không phải i bởi vì nếu là sinh viên thứ 3 thì sẽ xuống dòng 2 lần
            fread(&sv, size, 1, fp);
            printf("\n=====thong tin sinh vien can sua hien tai======\n");
            printf("%-30s %-30s %-30s %-30s\n","STT", "Ho Ten", "Que Quan", "Diem");
            printf("%-30ld %-30s %-30s %-30.2f\n",i, sv.ht, sv.qq, sv.diem);
            printf("\n sua diem trung binh: ");
            scanf("%f%*c",&sv.diem); //sửa điểm
            fseek(fp, (i-1)*size, SEEK_SET);  //đưa con trỏ về đầu dòng sinh viên cần sửa
            fwrite(&sv, size, 1, fp); //ghi lại sinh viên
            printf("ban da sua thanh cong!\n");
            printf("ban co muon sua tiep khong? (an EnTer de tiep tuc, an ESC de dung)\n ");
            key = getche();
            if (key == 27) {
                break;
            }
        }
        else {
            printf("khong co sinh vien so %ld", i);
            return;
        }
    }
    fclose(fp);
    fflush(fp);
}

int main()
{
    char key;
    do {
        system("cls");
        key = menu();
        switch (key) {
            case '1': {
                TaoTep();
            }break;
            case '2': {
                InTep();
            }break;
            case '3': {
                SuaTep();
            }break;
        }
        printf("ban co muon tiep tuc chuong trinh khong? (an EnTer de tiep tuc, an ESC de dung)");
        key = getche();
    }while (key!=27);
    return 0;
}
