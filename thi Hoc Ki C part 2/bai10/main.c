#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//10/ Viết hàm nhập mảng,xuất mảng,viết hàm in ra các phần tử là số nguyên tố
void NhapMang(int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        a[i]=rand()%100;
    }
}
void XuatMang(int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
}
int KiemTra(int x) {
    if(x<=1) {
        return 1; //loại 2 số 0 và 1
    }
    int i;
    for (i=2; i<x; i++) {
        if (x%i==0) {
            return 1; //nếu chia hết cho từ 2 đến x thì không phải số nguyên tố
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
    printf("\ncac sp nguyen to trong mang la: ");
    int i;
    for (i=0; i<n; i++) {
        if (a[i]==2) {
            printf("%4d",2);
        }
        if (KiemTra(a[i])==0) {
            printf("%4d",a[i]);
        }
    }
    return 0;
}
