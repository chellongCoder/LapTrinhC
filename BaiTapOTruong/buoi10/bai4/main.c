#include <stdio.h>
#include <stdlib.h>
//Câu 4. Viết chƣơng trình nhập vào số liệu bán hàng với n mặt hàng có cấu trúc gồm các thành phần: Tên hang, đơn giá, số lƣợng, thành tiền (= số lƣợng * đơn giá).
//Sau đó hiện ra màn hình theo dạng:
//SO LIEU BAN HANG
//STT Ten Hang Don gia So luong Thanh tien
//1    Sach      5         100       500
//2    But       2         300       600
typedef struct {
    char TenHang[30];
    int DonGia;
    int SoLuong;
    int ThanhTien;
}MatHang;

MatHang input () {
    MatHang hang;
    printf("nhap vao ten mat hang: ");
    fflush(stdin);
    gets(hang.TenHang);
    hang.DonGia = 1 + rand()%20;
    hang.SoLuong = 100+ rand()%1000;
    hang.ThanhTien = hang.SoLuong * hang.DonGia;
    return hang;
}
void output (MatHang *hang, int n) {
    int i;
    printf("%-30s %-30s %-30s %-30s %-30s\n","STT", "Ten Hang", "Don Gia", "So Luong", "Thanh Tien");
    for (i=0; i<n; i++) {
        printf("%-30d %-30s %-30d %-30d %-30d\n",i+1,(hang+i)->TenHang, (hang+i)->DonGia, (hang+i)->SoLuong, (hang+i)->ThanhTien);
    }
}
int main()
{
    int n;
    printf("nhap vao so luong mat hang: ");
    scanf("%d",&n);
    MatHang *hang;
    hang = (MatHang*)malloc(n*sizeof(MatHang));
    int i;
    for (i=0; i<n; i++) {
        *(hang+i) = input();
    }
    output(hang,n);
    return 0;
}
