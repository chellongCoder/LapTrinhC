#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//taoj 1 mảng bất kì, thêm 1 phần tử bất kì vào vị trí bất kì trong mảng
void NhapMang (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        a[i]=rand()%100;
    }
}
void XuatMang(int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%6d",a[i]);
    }
}
void ThemPhanTu (int a[], int n, int ViTriThem, int PhanTuthem) {
    int i;
    for (i=n-1; i>ViTriThem; i--) {
        a[i]=a[i-1];
    }
    a[ViTriThem]=PhanTuthem;
}
int main()
{
    srand(time(NULL));
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    int ViTriThem, PhanTuThem;
    do {
    printf("\nenter the position: ");
    scanf("%d",&ViTriThem);
    }while(ViTriThem<0 || ViTriThem>n);
    printf("\nenter the element to be inserted: ");
    scanf("%d",&PhanTuThem);
    n++;
    ThemPhanTu(a,n,ViTriThem,PhanTuThem);
    printf("\nthe array was inserted: ");
    XuatMang(a,n);
    return 0;
}
