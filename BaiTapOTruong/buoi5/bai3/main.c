#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Tìm tổng các phần tử mảng
//Viết chương trình C để nhập các phần tử mảng, sau đó tìm tổng các phần tử của mảng và hiển thị kết quả trên màn hình.
//Bài tập C này giúp bạn làm quen với các khái niệm: khai báo mảng, khởi tạo mảng, và cách truy cập các phần tử của mảng trong C.
int main()
{
    int n;
    printf("nhap so phan tu can luu giu trong mang: ");
    scanf("%d",&n);
    int a[n];
    printf("\nnhap %d phan tu can luu giu trong mang: \n",n);
    int i;
    for (i=0; i<n; i++) {
        printf("phan tu - %d: ",i);
        scanf("%d",&a[i]);
    }
    int sum=0;
    for (i=0; i<n; i++) {
        sum=sum+a[i];
    }
    printf("\nTong cac phan tu la: %d",sum);
    return 0;
}
