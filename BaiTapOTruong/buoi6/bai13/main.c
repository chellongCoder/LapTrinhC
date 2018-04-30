#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,m1,n2,m2;
    printf("nhap so hang cua ma tran thu 1: ");
    scanf("%d",&n1);
    printf("nhap so cot cua ma tran thu 1: ");
    scanf("%d",&m1);
    printf("nhap so hang cua ma tran thu 2: ");
    scanf("%d",&n2);
    printf("nhap so cot cua ma tran thu 2: ");
    scanf("%d",&m2);
    int a[n1][m1], b[n2][m2];
    printf("nhap cac phan tu cua ma tran thu 1: \n");
    int i,j;
    for (i=0; i<n1; i++) {
        for (j=0; j<m1; j++) {
            printf("phan tu - [%d,%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nnhap cac phan tu cua ma tran thu 2:\n");
     for (i=0; i<n2; i++) {
        for (j=0; j<m2; j++) {
            printf("phan tu - [%d,%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nin ma tran thu 1: \n");
    for (i=0 ;i<n1; i++) {
        for (j=0; j<m1; j++) {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nin ma tran thu 2: \n");
    for (i=0 ;i<n2; i++) {
        for (j=0; j<m2; j++) {
            printf("%-4d",b[i][j]);
        }
        printf("\n");
    }
    if (m1==m2 && n1==n2) {
        printf("co the so sanh 2 ma tran.");
        for (i=0; i<n1; i++) {
            for (j=0; j<m1; j++) {
                if (a[i][j]==b[i][j]) {
                    printf("\nhai ma tran bang nhau.");
                    break;
                }
                else {
                    printf("\n2 ma tran khong bang nhau.");
                    break;
                }
            }
        }
    }
    else {
        printf("\n2 ma tran khong bang nhau.");
    }
    return 0;
}
