#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 1 ma trận và chuyển vị ma trận đó
void NhapMang(int n, int m, int a[n][m]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            a[i][j]=rand()%100;
        }
    }
}
void XuatMang (int n, int m, int a[][m]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
}
void transposeArray (int n, int m, int a[][m]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            a[j][i]=a[i][j];
        }
    }
}
int main()
{
    srand(time(NULL));
    int n,m;
    printf("enter array row: ");
    scanf("%d",&n);
    printf("enter array column: ");
    scanf("%d",&m);
    int a[n][m];
    printf("\noutput array A: \n");
    NhapMang(n,m,a);
    XuatMang(n,m,a);
    transposeArray(n,m,a);
    printf("\noutput array A was transposed: \n");
    int i,j;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
