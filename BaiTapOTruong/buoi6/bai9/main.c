#include <stdio.h>
#include <stdlib.h>
//Bài tập 9: In ma trận tam giác trên
//Viết chương trình C để nhập một ma trận, sau đó in ma trận tam giác trên của ma trận đã cho trên màn hình.
//Ma trận tam giác trên này sẽ có các phần tử nằm dưới đường chéo chính đều bằng 0, các phần tử còn lại bằng phần tử của ma trận ban đầu.
int main()
{
    int n;
    printf("nhap vao kich co cua ma tran vuong: ");
    scanf("%d",&n);
    int a[n][n];
    printf("nhap cac phan tu cua ma tran: \n");
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("phan tu - [%d,%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nin ma tran: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nthiet lap cac phan tu nam duoi duong cheo chinh bang 0 \n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (j>=i) { // j>=i thì in ra phần tử
                printf("%-4d",a[i][j]);
            }
            else { //không thì ịn ra 0
                printf("%-4d",0);
            }
        }
        printf("\n");
    }
    return 0;
}
