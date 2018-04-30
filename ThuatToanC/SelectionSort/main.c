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
void SelectionSort (int a[], int n) {
    int i,j,min;
    for (i = 0; i<n; i++) {
        min = i;
        for (j=i+1; j<n; j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }
        if (min != i) {
            Hv(&a[min], &a[i]);
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
    printf("\nmang sau khi SelectionSort la: ");
    SelectionSort(a,n);
    xuatMang(a,n);
    return 0;
}
