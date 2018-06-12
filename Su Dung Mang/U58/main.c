#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 1 mảng và sắp xếp các pần tử (tăng dần hoặc giảm dần) và tìm kiếm 1 phần tử trong mảng
void NhapMang(int a[], int n){
    int i;
    for (i=0; i<n; i++) {
        a[i]=rand()%100;
    }
}
void XuatMang(int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
}
void selectionSort (int a[], int n) {
    int i,j,temp;
    int max;
    for (i=0; i<n-1; i++) {
        max=i;
        for (j=i+1; j<n; j++) {
            if (a[j]>a[max]) {
                max=j;
            }
            if (j!=i) {
                temp=a[i];
                a[i]=a[max];
                a[max]=temp;
            }
        }
    }
}
int main()
{
     srand(time(NULL));
    int n;
    printf("\nenter the size of arr: ");
    scanf("%d",&n);
    int a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    printf("\narray was sorted: ");
    selectionSort(a,n);
    XuatMang(a,n);
    return 0;
}
