#include <stdio.h>
#include <stdlib.h>
/*
Câu 11: Viết chương trình tạo ra một danh sách liên kết thuận để  quản lý danh sách sinh viên.
Cấu trúc sinh viên gồm các thành phần: Ho_ten, Tuoi, Diem_TB. Chương trình được tổ chức thành các chương trình con sau:
1) Tạo danh sách sinh viên
2) Hiển thị danh sách ra màn hình theo dạng
	DANH SACH SINH VIEN
STT	Ho ten	Tuoi	Diem TB
		. . .	. . .
*/
typedef struct {
    char HoTen[30];
    int Tuoi;
    float DiemTB;
}sinhvien;

void NhapMang (sinhvien a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("============nhap sinh vien thu %d: ==============\n",i+1);
        printf("nhap vao ho ten: ");
        fflush(stdin);
        gets(a[i].HoTen);
        printf("nhap tuoi sinh vien: ");
        scanf("%d",&a[i].Tuoi);
        printf("nhap vap diem tb: ");
        scanf("%f",&a[i].DiemTB);
    }
}
void XuatMang (sinhvien a[], int n) {
    int i;
    printf("%-30s %-30s %-30s %-30s\n","STT", "HO Ten", "Tuoi", "Diem TB");
    for (i=0; i<n; i++) {
        printf("%-30d %-30s %-30d %-30.2f\n", i+1, a[i].HoTen, a[i].Tuoi, a[i].DiemTB);
    }
}
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    sinhvien a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    return 0;
}
