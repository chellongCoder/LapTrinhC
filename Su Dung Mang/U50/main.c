#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 1 mảng 2 chiều cấp n. tính tổng đường chéo của ma trận
int main()
{
    srand(time(NULL));
    int n;
    printf("enter the level of matrix: ");
    scanf("%d",&n);
    int myarray[n][n];
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            myarray[i][j]=rand()%100;
        }
    }
    int sum=0;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%4d",myarray[i][j]);
            if (i==j) {
                sum=sum+myarray[i][j];
            }
        }
        printf("\n");
    }
    printf("\nsummation of the values diagonal elements: %d",sum);
    return 0;
}
