#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 2 ma trận và tính tổng 2 ma trận đó
void NhapMang (int n, int x[][n]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            x[i][j]=rand()%100;
        }
    }
}
void XuatMang (int n, int x[][n]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%-6d",x[i][j]);
        }
        printf("\n");
    }
}
void AddArray (int n, int a[][n], int b[][n], int c[][n]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
int main()
{
    srand(time(NULL));
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    int a[n][n];
    printf("\noutput array A: \n");
    NhapMang(n,a);
    XuatMang(n,a);
    int b[n][n];
    printf("\noutput array B: \n");
    NhapMang(n,b);
    XuatMang(n,b);
    int c[n][n];
    AddArray(n,a,b,c);
    printf("\noutput array C=A+B: \n");
    XuatMang(n,c);
    return 0;
}
