#include <stdio.h>
#include <stdlib.h>

// nhập vào 2 mảng và in ra các phần tử khác nhau trong 2 mảng
    void main ()
{
    int a[100];
    int b[100];
    int n;
    int tam;
    printf("nhap vao n so hang cua mang 1 ");
    scanf("%d", &n);
    nhapmang1(a,n);
    xuatmang1(a,n);
    printf("\nnhap vao n so hang cua mang 2 ");
    scanf("%d", &n);
    nhapmang2(a,n);
    xuatmang2(a,n);
    printf("\ncac phan tu khong chung cua 2 mang la\n");
    ktra(a,b,n);
    return 0;
}

void nhapmang1 (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d" ,&a[i]);
        printf("\n");
    }
}
void xuatmang1 (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= %d",i,a[i]);
        printf("\t");
    }
}
void nhapmang2 (int b[], int n) {
    int x;
    for (x=0; x<n; x++) {
        printf("b[%d]= ",x);
        scanf("%d",&b[x]);
        printf("\n");
    }
}
void xuatmang2 (int b[], int n) {
    int x;
    for (x=0; x<n; x++) {
        printf("b[%d]= %d", x, b[x]);
        printf("\t");
    }
}
void ktra (int a[],int b[], int n) {
    int i,x,tam=0;
    int dem;
    for (i=0; i<n; i++) {
        dem=0;
        tam=a[i];
        for (x=0; x<n; x++) {
            if (tam==b[x]) {
                dem=1;
                break;
            }
        }
        if (dem==0) {
            printf("%d ",tam);
        }
    }
}


