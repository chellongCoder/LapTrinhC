#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Hàm main() hiển thị menu để chọn các chức năng bằng cách nhập số tương ứng như sau
//1.	Tao danh sach sinh vien
//2.	Hien thi danh sach sinh vien
//3.	Chen them sinh vien
//4.	Xóa một sinh viên
//5.	Sửa một sinh viên
//6.    tim kiem 1 sinh vien
//7.	Ket thuc

typedef struct {
    int STT;
    char ht[30];
    int tuoi;
    float diemTB;
}sinhvien;
sinhvien *p;
int n;

sinhvien TaoDS(sinhvien *p) {
    int i;
    for (i=0; i<n; i++) {
        printf("sinh vien thu %d: \n ",i);
        printf("\tnhap ho ten: ");
        fflush(stdin);
        gets((p+i)->ht);
        printf("nhap tuoi sv: ");
        scanf("%d",&(p+i)->tuoi);
        printf("nhap diem TB: ");
        scanf("%f", &(p+i)->diemTB);
    }
}
void HienThiSV() {
    printf("HIEN THI DANH SACH SV: \n");
    int i;
    printf("%-10s %-30s %-15s %-15s\n","STT", "HO Ten", "TUOI", "DIEM");
    for (i=0; i<n; i++) {
        printf("%-10d %-30s %-15d %-15.2f\n",i+1, (p+i)->ht, (p+i)->tuoi, (p+i)->diemTB);
    }
}

void ChenSV() {
    int i;
    int ViTriThem;
    printf("nhap vao vi tri can chen:(1->n) ");
    scanf("%d",&ViTriThem);
    int sv;
    printf("nhap vao so luong sv can chen: ");
    scanf("%d", &sv);
    realloc(p,(n+sv)*sizeof(sinhvien));
     for (i=n-1+sv; i>ViTriThem; i--) {
        *(p+i)=*(p+(i-1));
    }
    for (i=0; i<sv; i++) {
        //printf("sinh vien thu %d: \n ",i+1);
        printf("\tnhap ho ten: ");
        fflush(stdin);
        gets((p+ViTriThem)->ht);
        printf("nhap tuoi sv: ");
        scanf("%d",&(p+ViTriThem)->tuoi);
        printf("nhap diem TB: ");
        scanf("%f",&(p+ViTriThem)->diemTB);
    }
    //sinhvien T=AddData(ViTriThem);

    //*(p+ViTriThem)=T;
     printf("%-10s %-30s %-15s %-15s\n","STT", "HO Ten", "TUOI", "DIEM");
    for (i=0; i<=n; i++) {
         printf("%-10d %-30s %-15d %-15.2f\n",i+1, (p+i)->ht, (p+i)->tuoi, (p+i)->diemTB);
    }
}
void XoaSV() {
    int i;
    int ViTriXoa;
    printf("nhap vao vi tri xoa: ");
    scanf("%d", &ViTriXoa);
    for (i=ViTriXoa; i<n; i++) {
        *(p+i)=*(p+(i+1));
    }
     printf("%-10s %-30s %-15s %-15s\n","STT", "HO Ten", "TUOI", "DIEM");
    for (i=0; i<n; i++) {
        printf("%-10d %-30s %-15d %-15.2f\n",i+1, (p+i)->ht, (p+i)->tuoi, (p+i)->diemTB);
    }
    realloc(p,n*sizeof(sinhvien));
}
void SuaSV() {
    int i;
    int STT;
    printf("sua sinh vien co sTT la: ");
    scanf("%d",&STT);
    for (i=0; i<n; i++) {
        if (i+1==STT) {
            printf("\tnhap ho ten: ");
            fflush(stdin);
            gets((p+i)->ht);
            printf("nhap tuoi sv: ");
            scanf("%d",&(p+i)->tuoi);
            printf("nhap diem TB: ");
            scanf("%f",&(p+i)->diemTB);
        }
    }
}

void KetThuc() {
     printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n+------+----[               SINH VIEN THUC HIEN                  ]---+-------+");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n|----- + ----->          NGUYEN NHAT LONG       N/S: 17/07/1998  <-----------|");
    printf("\n|----- + ----->                  LOP: Cl04                       <-----------|");
    printf("\n|----- + ----->          ACT academy networking                  <-----------|");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    getch();
}
int main()
{
    int chon,kt;
    printf("nhap so luong sv: ");
    scanf("%d",&n);
    p=(sinhvien*)malloc(n*sizeof(sinhvien));
    printf("======================================\n");
    printf("MENU:\n");
    printf("1. tao danh sach sinh vien\n");
    printf("2. Hien thi danh sach sinh vien\n");
    printf("3. chen them 1 sinh vien\n");
    printf("4. Xoa 1 sinh vien\n");
    printf("5. Sua 1 sinh vien\n");
    printf("6. Ket Thuc\n");
    printf("=======================================\n");
    do {
        printf("Moi ban chon: ");
        scanf("%d",&chon);
        switch (chon) {
            case 1: TaoDS(p);break;
            case 2: HienThiSV();break;
            case 3: ChenSV();break;
            case 4: XoaSV();break;
            case 5: SuaSV();break;
            case 6: KetThuc();
            default: printf("moi ban nhap lai\n");
        }
        printf("ban co muon tiep tuc hay khong? Y or N?\n");
        scanf("%d",&kt);
    }while(kt!=0);
    free(p);
    return 0;
}
