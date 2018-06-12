#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//9/Viết hàm nhập mảng,xuất mảng,viết hàm in ra các phần tử là số chính phương
void NhapMang(int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        a[i]=rand()%101; //sinh số nhỏ hơn 100
    }
}
void XuatMang(int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
}
int KiemTra(int x) {
    int i;
    for (i=0; i<=10; i++) {
        if (i*i==x) {
            return 1;
        }
    }
    return 0;
}
int main()
{
    srand(time(NULL));
    int n;
    printf("nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    int i;
    printf("\ncac so chinh phuong trong mang la: ");
    for (i=0; i<n; i++) {
        if (KiemTra(a[i])==1) {
            printf("%4d",a[i]);
        }
    }
    return 0;
}
