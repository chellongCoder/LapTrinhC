#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 1 mảng 2 chiều gồm m x n phần tử, in ra giá trị trung bình của mảng
int main()
{
    srand(time(NULL));
    int n,m;
    printf("enter the number of column and row: \n");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            a[i][j]=rand()%100;
        }
    }
    int sum=0;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%3d",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\nthe average of the all the values: %0.2f",(float)sum/(n+m));
    return 0;
}
