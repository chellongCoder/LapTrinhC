#include <stdio.h>
#include <stdlib.h>
//Bài tập 6: Tính tổng các phần tử trên đường chéo chính của ma trận
//Viết chương trình C để nhập một ma trận, sau đó tính tổng các phần tử nằm trên đường chéo chính của ma trận và in kết quả trên màn hình.
int main()
{
    int n;
    printf("nhap kich co cua ma tran vuong: ");
    scanf("%d",&n);
    int a[n][n];
    printf("\nnhap cac phan tu cua ma tran: \n");
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("phan tu-[%d,%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nin cac phan tu cua ma tran:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (i==j) {
                sum=sum+a[i][j];
            }
        }
    }
    printf("tong cac phan tu tren duong cheo chinh la: %d",sum);
    return 0;
}
