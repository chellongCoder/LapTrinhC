#include <stdio.h>
#include <stdlib.h>
//Bài tập 1: Đọc và in mảng hai chiều
//Viết chương trình C để nhập một mảng hai chiều có kích cỡ 3x3, sau đó in các phần tử mảng hai chiều này trên màn hình.
//Đây là bài tập C cơ bản minh họa giúp bạn cách khai báo, khởi tạo, truy cập và in các phần tử của mảng hai chiều trong C.
int main()
{
    int a[3][3];
    int i,j;
    printf("nhap cac phan tu vao mang 2 chieu:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("Phan tu - [%d,%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nin mang 2 chieu: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
