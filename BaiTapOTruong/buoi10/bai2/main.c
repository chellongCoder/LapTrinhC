#include <stdio.h>
#include <stdlib.h>
/*
Câu 2. Xây dựng một mảng cấu trúc mà mỗi thành phần của nó có kiểu nhƣ cấu trúc ở bài 1.
 Nhập số liệu của 20 phiếu điểm và lƣu trữ vào mảng cấu trúc nói trên.
 Tìm kiếm và in ra các thí sinh có tổng số điểm ba môn lớn hơn 15,
 */
typedef struct {
    char Ho[20], TenDem[20], Ten[20];
}HoTen;

typedef struct {
    char xa[30], huyen[30], tinh[30];
}QueQuan;

typedef struct {
    float Toan, Ly,Hoa;
    float tong;
}DiemThi;

typedef struct {
    HoTen ht;
    QueQuan qq;
    DiemThi dt;
}PhieuDiem;

PhieuDiem input () { //nhập 1 sinh viên
    PhieuDiem sv;
   // int i;
   // for (i=0; i<n; i++) {
        printf("\n===================================================\n");
        //printf("nhap sinh vien thu %d\n",i+1);
        printf("nhap vao ten: ");
        fflush(stdin);
        gets(sv.ht.Ten);
        printf("nhap vao ho: ");
        fflush(stdin);
        gets(sv.ht.Ho);
        printf("nhap vao ten dem: ");
        fflush(stdin);
        gets(sv.ht.TenDem);
        printf("\n=================================================\n");
        printf("nhap vao xa: ");
        fflush(stdin);
        gets(sv.qq.xa);
        printf("nhap vao huyen: ");
        fflush(stdin);
        gets(sv.qq.huyen);
        printf("nhap vao tinh: ");
        fflush(stdin);
        gets(sv.qq.tinh);
        printf("\n=================================================\n");
        printf("nhap vao diem toan: ");
        sv.dt.Toan = 10.10*rand()/RAND_MAX;
        printf("nhap vao diem ly: ");
        sv.dt.Ly = 10.10*rand()/RAND_MAX;
        printf("nhap vao diem hoa: ");
        sv.dt.Hoa = 10.10*rand()/RAND_MAX;
        sv.dt.tong = sv.dt.Toan + sv.dt.Ly +sv.dt.Hoa;
        return sv;
   // }
}
void output (PhieuDiem sv, int n) { //xuất 1 sinh viên
    printf("\n%30s %60s %70s\n","HO TEN","QUE QUAN", "DIEM THI");
    printf("=====================================================================================================================================================================================\n");
    printf("\n||%-20s %-20s %-20s || %-20s %-20s %-20s || %-20s %-20s %s||\n","Ten", "Ho", "TenDem", "Xa", "Huyen", "Tinh", "Toan", "Ly", "Hoa");
    //int i;
    //for (i=0; i<n; i++) {
        printf("||%-20s %-20s %-20s || %-20s %-20s %-20s || %-20.2f %-20.2f %.2f||\n",sv.ht.Ten, (sv).ht.Ho, (sv).ht.TenDem, (sv).qq.xa, (sv).qq.huyen, (sv).qq.tinh
    ,(sv).dt.Toan, sv.dt.Ly, (sv).dt.Hoa);
    //}
}

void search (PhieuDiem *sv, int n) {
    int i;
    for (i=0; i<n; i++) {
        if (sv[i].dt.tong > 15) {
            output(sv[i],n);
        }
    }
}

int main()
{
    int n;
    printf("nhap vao so phieu diem: ");
    scanf("%d",&n);
    PhieuDiem *sv;
    sv = (PhieuDiem*)malloc(n*sizeof(PhieuDiem));
    int i;
    for (i=0; i<n; i++) {
        sv[i] = input();
    }
    for (i=0; i<n; i++) {
        output(sv[i],n);
    }
    printf("\n nhung bạn co tong diem > 15 la: \n");
    search(sv,n);
return 0;
}
