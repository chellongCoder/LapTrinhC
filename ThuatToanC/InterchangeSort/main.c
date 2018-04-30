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

void InterchangeSort (int a[], int n) {
    int i , j;
    for (i = 0; i<n ; i++) {
        for (j = i+1; j< n ;j++) {
            if (a[i] > a[j]) {
                Hv(&a[i], &a[j]);
            }
        }
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
    printf("mang sap xep InterchangeSort: \n");
    InterchangeSort(a,n);
    xuatMang(a,n);
    return 0;
}
