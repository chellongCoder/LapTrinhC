#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 2 mảng 1 chiều cùng kích thước và tính tổng 2 mảng đó, in mảng mới
void NhapMang(int x[], int n) {
    int i;
    for (i=0; i<n; i++) {
        x[i]=rand()%100;
    }
}
void XuatMang(int x[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%4d",x[i]);
    }
}
void CongMang(int a[], int b[], int x[], int n) {
    int i;
    for (i=0; i<n; i++) {
        x[i]=a[i]+b[i];
    }
}
int main()
{
    srand(time(NULL));
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("input array a: \n");
    int a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    printf("\ninput array b: \n");
    int b[n];
    NhapMang(b,n);
    XuatMang(b,n);
    printf("\nsummation of two array: \n");
    int ab[n];
    CongMang(a,b,ab,n);
    XuatMang(ab,n);

    return 0;
}
