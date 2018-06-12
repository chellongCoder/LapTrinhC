#include <stdio.h>
#include <stdlib.h>
#define NAME_LEN 20
char ten_file[] = "C:\\12b.c";
typedef struct HangHoa
{
    char tenhang[NAME_LEN];
    int dongia;
    int soluong;
    int thanhtien;
}HangHoa;

int menu()
{
    int chon;
    printf("1.Nhap so lieu ban hang len tep\n");
    printf("2.Ghi bo sung so lieu ban hang vao cuoi tep SO_LIEU.C\n");
    printf("3.Hien thi noi dung tep SO_LIEU.C\n");
    printf("4.Ket thuc\n");
    printf("=================================\n");
    printf("Ban chon: ");
    scanf("%d", &chon);
    return chon;
}
void nhap_so_lieu()
{
    //tao file de chua so lieu
    FILE *f = fopen(ten_file, "wb");
    if(f==NULL)
    {
        printf("Co loi khi tao file %s\n", ten_file);
        return;
    }
    HangHoa hang;
    char traloi;
    do
    {
        //nhap mot mat hang
        printf("Nhap thong tin mat hang\n");
        printf("Ten hang: ");
        fflush(stdin);
        gets(hang.tenhang);
        printf("Don gia: ");
        scanf("%d", &(hang.dongia));
        printf("So luong: ");
        scanf("%d", &(hang.soluong));
        hang.thanhtien = hang.dongia*hang.soluong;

        //ghi vao file
        fwrite(&hang, sizeof(hang), 1, f);

        //hoi co tiep tuc khong
        printf("co muon nhap tiep khong?(C/K): ");
        fflush(stdin);
        scanf("%c", &traloi);

    }while(traloi!='k' && traloi!='K');
    //dong tep
    fclose(f);
}

void bo_sung()
{
    //mo file de bo sung so lieu
    FILE *f = fopen(ten_file, "ab");
    if(f==NULL)
    {
        printf("Co loi khi mo file %s\n", ten_file);
        return;
    }
    HangHoa hang;
    char traloi;
    do
    {
        //nhap mot mat hang
        printf("Nhap thong tin mat hang\n");
        printf("Ten hang: ");
        fflush(stdin);
        gets(hang.tenhang);
        printf("Don gia: ");
        scanf("%d", &(hang.dongia));
        printf("So luong: ");
        scanf("%d", &(hang.soluong));
        hang.thanhtien = hang.dongia*hang.soluong;

        //ghi vao file
        fwrite(&hang, sizeof(hang), 1, f);

        //hoi co tiep tuc khong
        printf("co muon nhap tiep khong?(C/K): ");
        fflush(stdin);
        scanf("%c", &traloi);

    }while(traloi!='k' && traloi!='K');
    //dong tep
    fclose(f);
}

void hien_thi()
{
    int stt=0;
    printf("%3s %*s %10s %10s %10s\n", "STT", NAME_LEN, "Ten Hang", "Don Gia", "So Luong", "Thanh Tien");
    FILE *f = fopen(ten_file, "rb");
    HangHoa hang;
    int count;
    while(1)
    {
        count = fread(&hang, sizeof(HangHoa), 1, f);
        if(count == 0)
            break;
        stt++;
        printf("%3d %*s %10d %10d %10d\n", stt, NAME_LEN, hang.tenhang, hang.dongia, hang.soluong, hang.thanhtien);

    }
    fclose(f);
}

int main()
{
    int da_chon;
    do
    {
        da_chon = menu();
        switch(da_chon)
        {
        case 1:
            nhap_so_lieu();
            break;
        case 2:
            bo_sung();
            break;
        case 3:
            hien_thi();
            break;
        }
    }while (da_chon!=4);
    return 0;
}
