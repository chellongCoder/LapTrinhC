#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Tìm tổng(chẵn, lẽ) các phần tử mảng
//Viết chương trình C để nhập các phần tử mảng, sau đó tìm tổng các phần tử của mảng và hiển thị kết quả trên màn hình.
void NhapMang ( int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        a[i] = rand()%100;
    }
}

void XuatMang (int a[], int n) {
    int i;
    printf("\ncac phan tu trong mang la: ");
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
}

int Tong (int a[], int n) {
    int i;
    int tong=0;
    for (i=0; i<n; i++) {
        tong = tong + a[i];
    }

    return tong;
}
int main()
{
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    int tong = Tong(a,n);
    printf("\ntong cac phan tu cua mang la: %d",tong);
    return 0;
}
