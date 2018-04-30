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
void QuickSort (int a[], int L, int R) {
    int i = L, j = R;
    int x = a[(L+R)/2];
    while (i<=j) {
        while (a[i]<x) {
            i++;
        }
        while (a[j]>x) {
            j--;
        }
        if (i<=j) {
            Hv(&a[i], &a[j]);
            i++;
            j--;
        }
    }
    if (L<j) {
        QuickSort(a,L,j);
    }
    if (i<R) {
        QuickSort(a,i,R);
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
    printf("\nmang sau khi sx Quick sort la: ");
    QuickSort(a,0,n-1);
    xuatMang(a,n);
    return 0;
}
