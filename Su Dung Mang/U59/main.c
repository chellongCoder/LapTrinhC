#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 2 mảng có kích thước lần lượt là m,n. gộp 2 mảng làm 1 và sắp xếp mảng mới
void NhapMang(int x[], int size){
    int i;
    for (i=0; i<size; i++) {
        x[i]=rand()%100;
    }
}
void XuatMang(int x[], int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("%4d",x[i]);
    }
}
void mergeArray (int a[], int b[], int c[], int n, int m) {
    int k=0;
    int i;
    for (i=0; i<n; i++) {
        c[k]=a[i]; // gán từ phần tử thứ 0 của mảng c
        k++;// tăng dần thứ tự phần tự
    }
    k=n; // gộp tiếp mảng b vào đằng sau mảng a (lúc nào mảng a đã nằm trong mảng c)
    for (i=0; i<m; i++) {
        c[k]=b[i];
        k++;
    }
}
void Sort (int x[], int size) {
    int i,j,tam;
    for (i=0; i<size; i++) {
        for (j=i+1; j<size; j++) {
            if (x[i]>x[j]) {
                tam=x[i];
                x[i]=x[j];
                x[j]=tam;
            }
        }
    }
}
int main()
{
    srand(time(NULL));
    int n,m;
    printf("enter size of array A: ");
    scanf("%d",&n);
    printf("\nenter size of Array B: ");
    scanf("%d",&m);
    int a[n];
    printf("\noutput Array A: ");
    NhapMang(a,n);
    XuatMang(a,n);
    int b[m];
    printf("\noutput Array B: ");
    NhapMang(b,m);
    XuatMang(b,m);
    int c[m+n];
    mergeArray(a,b,c,n,m);
    Sort(c,(m+n));
    printf("\n array c was merged and sorted: ");
    XuatMang(c,(m+n));
    return 0;
}
