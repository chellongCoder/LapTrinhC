#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Trừ ma trận
//Viết chương trình C để trừ ma trận và sau đó in ma trận kết quả trên màn hình.
//Các bài tập về ma trận là các bài tập đặc trưng về cách sử dụng mảng hai chiều trong C.
//Bài tập trừ ma trận này là bài tập minh họa cho bạn cách khai báo, khởi tạo, truy cập các phần tử của mảng hai chiều trong C.
int main()
{
    srand(time(NULL));
    int n;
    printf("nhap kich co cua ma tran vuong (nho hon 5): ");
    scanf("%d",&n);
    int a[n][n], b[n][n];
    int i,j;
    printf("\nnhap cac phan tu vao ma tran dau tien: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("phan tu-[%d,%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nnhap cac phan tu vao ma tran thu hai: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("phan tu-[%d,%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nin ma tran thu nhat: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nin ma tran thu hai: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%-4d",b[i][j]);
        }
        printf("\n");
    }
    int c[n][n];
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\nHieu cua 2 ma tran tren la: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%-4d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
