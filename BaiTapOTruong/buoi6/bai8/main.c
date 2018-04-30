#include <stdio.h>
#include <stdlib.h>
//Bài tập 8: Tính tổng các hàng, các cột của ma trận
//Viết chương trình C để nhập một ma trận, sau đó tính tổng các hàng, các cột của ma trận và in kết quả trên màn hình.
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
    int sum;
    printf("\nTong cac hang va cac cot trong ma tran la: \n");
    for (i=0; i<n; i++) { //tính tổng các hàng
        sum=0; //khởi tọ qua mỗi hàng tổng lại bằng 0
        for (j=0; j<n; j++) {
            sum=sum+a[i][j];
            printf("%-4d",a[i][j]);// in ra 1 hàng
        }
        printf("%-4d",sum); //in ra tổng sau mỗi hàng
        printf("\n");
    }
    printf("\n");
    // sau đó tính tổng cột
    for (i=0; i<n; i++) {
        sum=0;
        for (j=0; j<n; j++) {
            sum=sum+a[j][i]; //tính tổng cột (j tăng)
        }
        printf("%-4d",sum);
    }
    return 0;
}
