#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//8/Nhập mảng 2 chiều có dạng A[n][n]
void NhapMang(int n, int a[n][n]) {
     int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            a[i][j]=-10+rand()%100;
        }
    }
}
void XuatMang(int n, int a[n][n]) {
    printf("ma tran cap %d la\n",n);
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%3d",a[i][j]);
        }
        printf("\n");

    }
}
int main()
{
    srand(time(NULL));
    int n;
    printf("nhap vao cap ma tran: ");
    scanf("%d",&n);
    int a[n][n];
    NhapMang(n,a);
    XuatMang(n,a);
    return 0;
}
