#include <stdio.h>
#include <stdlib.h>
void nhapMang (int a[], int n) {
    int i;
    for (i = 0; i < n ; i ++) {
        printf("nhap vao a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n) {
    int i;
    for(i = 0; i<n; i++) {
        printf("%d\t",a[i]);
    }
}
void Hv (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void InsertionSort (int a[], int n) {
    int t,j;
    int i;
    for (i = 1; i < n; i++) {
        j=i-1;
        t = a[i];
        while (t < a[j] && j >= 0) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
    }
}

int main()
{
    int n;
    printf("nhap vao so n: ");
    scanf("%d", &n);
    int a[n];
    printf("nhap mang: \n" );
    nhapMang(a,n);
    printf("xuat Mang: ");
    xuatMang(a,n);
    printf("\nmang sau khi insertionSort la: ");
    InsertionSort(a,n);
    xuatMang(a,n);
    return 0;
}
