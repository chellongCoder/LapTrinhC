#include <stdio.h>
#include <stdlib.h>
//Bài tập 1: Đọc và in các phần tử mảng
//Viết chương trình C để khai báo một mảng, sau đó lưu giữ các phần tử vào mảng rồi in các phần tử mảng này trên màn hình.
int main()
{
    int a[10];
    int i;
    printf("nhap 10 phan tu vao mang: \n");
    for (i=0; i<10; i++) {
        printf("nhap phan tu-%d: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nin cac phan tu trong mang: ");
    for (i=0; i<10; i++) {
        printf("%4d",a[i]);
    }
    return 0;
}
