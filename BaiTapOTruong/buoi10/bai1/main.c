#include <stdio.h>
#include <stdlib.h>
//câu 1: viết chương trình xây dựng 1 cấu trúc (ứng với phiếu điểm của thí sinh , gồm các thành phần: )
// - họ tên
// - quê quán
// - trường
// - tuổi
// - số báo danh
// - điểm thi
typedef struct {
    char Ho[20], TenDem[20], Ten[20];
}HoTen;

typedef struct {
    char xa[30], huyen[30], tinh[30];
}QueQuan;

typedef struct {
    float Toan, Ly,Hoa;
}DiemThi;

typedef struct {
    HoTen ht;
    QueQuan qq;
    DiemThi dt;
}PhieuDiem;

void input (PhieuDiem *sv) {

    printf("nhap vao ten: ");
    fflush(stdin);
    gets(sv->ht.Ten);
    printf("nhap vao ho: ");
    fflush(stdin);
    gets(sv->ht.Ho);
    printf("nhap vao ten dem: ");
    fflush(stdin);
    gets(sv->ht.TenDem);
    printf("\n=================================================\n");
    printf("nhap vao xa: ");
    fflush(stdin);
    gets(sv->qq.xa);
    printf("nhap vao huyen: ");
    fflush(stdin);
    gets(sv->qq.huyen);
    printf("nhap vao tinh: ");
    fflush(stdin);
    gets(sv->qq.tinh);
    printf("\n=================================================\n");
    printf("nhap vao diem toan: ");
    //sv->dt.Toan = 10.10*rand()/RAND_MAX;
    scanf("%f", &sv->dt.Toan);
    printf("nhap vao diem ly: ");
    sv->dt.Ly = 10.10*rand()/RAND_MAX;
    printf("nhap vao diem hoa: ");
    sv->dt.Hoa = 10.10*rand()/RAND_MAX;
}
void output (PhieuDiem *sv) {
    printf("\n%10s %40s %60s\n","HO TEN","QUE QUAN", "DIEM THI");
    printf("=====================================================================================================================================================================================\n");
    printf("\n||%-20s %-20s %-20s || %-20s %-20s %-20s || %-20s %-20s %s||\n","Ten", "Ho", "TenDem", "Xa", "Huyen", "Tinh", "Toan", "Ly", "Hoa");
    printf("||%-20s %-20s %-20s || %-20s %-20s %-20s || %-20.2f %-20.2f %.2f||\n",sv->ht.Ten, sv->ht.Ho, sv->ht.TenDem, sv->qq.xa, sv->qq.huyen, sv->qq.tinh
    ,sv->dt.Toan, sv->dt.Ly, sv->dt.Hoa);
}
int main()
{
    PhieuDiem *sv;
    sv = (PhieuDiem*)malloc(sizeof(PhieuDiem));
    input(sv);
    output(sv);
    return 0;
}
