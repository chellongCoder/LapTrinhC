#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Bài tập 5: Tìm ma trận chuyển vị
//Viết chương trình C để nhập một ma trận, sau đó tìm ma trận chuyển vị của ma trận đã cho rồi in ma trận chuyển vị trên màn hình.
int main()
{
    srand(time(NULL));
    int m,n;
    printf("nhap vao so hang va so cot cua ma tran ban dau: ");
    printf("\nnhap so hang: ");
    scanf("%d",&n);
    printf("nhap vao so cot: ");
    scanf("%d",&m);
    int a[n][m];
    int i,j;
    printf("\nnhap cac phan tu cua ma tran: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            a[i][j] = rand() % 100;
        }
    }
    printf("\nin ma tran ban dau:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
    int temp[n][m];
    int row = 0, col = 0;
    printf("\nin ma tran chuyen vi:\n");
    for (i=0; i<n; i++){
        for (j=0; j<m; j++) {
            int t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
            temp[row++][col++] = a[i][j];
            printf("%-4d",a[i][j]);

        }
        printf("\n");
    }
    printf("\n");
    for (i=0; i<row; i++) {
        for (j=0; j<col; j++) {
            printf("%-4d", temp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
