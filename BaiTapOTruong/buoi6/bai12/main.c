#include <stdio.h>
#include <stdlib.h>
//Bài tập 12: Kiểm tra ma trận thưa (Sparse Matrix)
int main()
{
    int n,m;
    printf("nhap so hang cua ma tran: ");
    scanf("%d",&n);
    printf("nhap so cot cua ma tran: ");
    scanf("%d",&m);
    int a[n][m];
    int i,j;
    printf("\nnhap cac phan tu vao trong ma tran: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("phan tu - [%d,%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int dem1=0,dem2=0;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (a[i][j]==0) {
                dem1++;
            }
            else {
                dem2++;
            }
        }
    }
    if (dem1>dem2) {
        printf("\nMa tran da cho la ma tran thua (sparse matrix).");
        printf("\nco %d phan tu bang 0",dem1);
    }
    else  {
        printf("khong phai ma tran thua.");
    }
    return 0;
}
