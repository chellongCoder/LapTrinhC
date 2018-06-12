#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 1 mảng bất kì và in ra các số nguyên tố trong mảng
void NhapMang (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        a[i]=rand()%100;
    }
}
void XuatMang (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
}
int KiemTra (int x) {
    int count=0;
    int i;
    for (i=1; i<=x; i++) {
        if (x%i==0) {
            count++;
        }
    }
    if (count==2) {
        return count;
    }
}
int main()
{
    srand(time(NULL));
    int n;
    printf("input the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("output array a: \n");
    NhapMang(a,n);
    XuatMang(a,n);
    printf("\n");
    int i;
    for (i=0; i<n; i++) {
        if (KiemTra(a[i])==2) {
            printf("%4d",a[i]);
        }
    }

    return 0;
}
