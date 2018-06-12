#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//11/Nhập mảng 2 chiều có dạng M*N (Hoặc N*N) rồi tính tổng các phần từ.
void NhapMang(int n, int m, int a[n][m]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            a[i][j]=rand()%100;
        }
    }
}
void XuatMang(int n, int m, int a[n][m]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}
int TinhTong(int n, int m, int a[n][m]) {
    int S=0;
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            S=S+a[i][j];
        }
    }
    return S;
}
int main()
{
    srand(time(NULL));
    int n,m; //n là hàng, m là cột
    printf("nhap vao so hang: ");
    scanf("%d",&n);
    printf("nhap vao so cot: ");
    scanf("%d",&m);
    int a[n][m];
    NhapMang(n,m,a);
    XuatMang(n,m,a);
    int S=TinhTong(n,m,a);
    printf("\ntong cac phan tu trong mang la: %d",S);
    return 0;
}
