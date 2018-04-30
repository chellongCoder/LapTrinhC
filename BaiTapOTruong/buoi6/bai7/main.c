#include <stdio.h>
#include <stdlib.h>
//Bài tập 7: Tính tổng các phần tử trên đường chéo phụ của ma trận
//Viết chương trình C để nhập một ma trận, sau đó tính tổng các phần tử nằm trên đường chéo phụ của ma trận và in kết quả trên màn hình.
int main()
{
    int n;
    printf("nhap vao kich co cua ma tran vuong: ");
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    printf("\nnhap cac phan tu vao trong ma tran: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("phan tu-[%d,%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n in ma tran: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (i+j==n-1) {
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nTong cac phan tu tren duong cheo phu la: %d",sum);
    return 0;
}
