#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("nhap hang:> ");
    scanf("%d", &n);
    printf("nhap cot:> ");
    scanf("%d", &m);
    int a[n][m];
    printf("nhap ma tran:\n");
    int i,j;
    for(i=0; i<n; i++) {
        for(j=0;j<m; j++) {
            printf("a[%d][%d]:> ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for(i=0; i<n; i++) {
        for(j=0;j<m; j++) {
            sum+=a[i][j];
        }
    }
    printf("tong ma tran:> %d\n", sum);
    int max = a[0][0];
    for(i=0; i<n; i++) {
        for(j=0;j<m; j++) {
            if(a[i][j]>max) {
                max = a[i][j];
            }
        }
    }
    printf("gia tri lon nhat cua ma tran:> %d\n", max);
    int tich[m];
    int dem=0;
    for(j=0; j<m; j++) {

        int t = 1;
        for(i=0;i<n; i++) {
            t *= a[i][j];
        }
        tich[dem++] = t;
    }
    int min = tich[0];
    for(i=0; i<m; i++) {
        if(tich[i]<min) {

            min = tich[i];
        }
    }
    printf("min = %d\n", min);
    return 0;
}
