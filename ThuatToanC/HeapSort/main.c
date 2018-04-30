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
void Heapify (int a[], int n, int R) { //tìm ra các gốc
    int l = 2*R + 1; //nhánh trái
    int r = 2*R + 2;
    int max = R;
    if ((l<n) && (a[l]>a[R])) max = l; //nếu nhánh trái lớn hơn root, max = trái
    if ((r<n) && a[r]>a[max]) max = r; //nếu nhánh phải lớn hơn max, max = phải

    if (max != R) {
        Hv(&a[R], &a[max]);
        Heapify (a,n,max);
    }
}
void buildHeap (int a[], int n) {
    int i;
    for (i=n/2-1; i>=0; i--) {
        Heapify(a,n,0);
    }
}

void heapSort (int a[], int n) {
    int i;
    buildHeap(a,n);
    for (i=n-1; i>=0; i--) {
        Hv(&a[0], &a[i]);
        Heapify(a,n,0);
    }
}
int main()
{
    int n;
    printf("nhap vap so n: ");
    scanf("%d", &n);
    int a[n];
    return 0;
}
