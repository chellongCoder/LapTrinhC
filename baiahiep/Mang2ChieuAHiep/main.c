#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
        printf("nhap vao so hang ");
        scanf("%d",&m);
        printf("nhap vao so cot ");
        scanf("%d",&n);
        int a[m][n];
        printf("nhap vao ma tran\n");
    int i,j;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("a[%d][%d]= ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
        printf("xuat ra ma tran\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%d " ,a[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            sum=sum+a[i][j];
        }
    }
        printf("tong = %d\n", sum);
        printf("cac so chan la\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (a[i][j] %2==0) {
                printf("%d ",a[i][j]);
            }
        }
    }
        printf("\nca so le la\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (a[i][j]%2!=0) {
                printf("%d ", a[i][j]);
            }
        }
    }
    int k;
    int tam;
    for (k=0; k<m; k++) {
        for (i=0; i<n-1; i++) {
            for (j=i+1; j<n; j++) {
                if (a[k][i]<a[k][j]) {
                    tam=a[k][i];
                    a[k][i]=a[k][j];
                    a[k][j]=tam;
                }
            }
        }
    }
    printf("mang sau khi sx la \n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
