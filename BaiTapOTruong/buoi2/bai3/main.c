#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Tìm tổng(chẵn, lẽ) các phần tử mảng

//Viết chương trình C để nhập các phần tử mảng, sau đó tìm tổng các phần tử của mảng và hiển thị

//kết quả trên màn hình.

//Bài tập C này giúp bạn làm quen với các khái niệm: khai báo mảng, khởi tạo mảng, và cách truy

//cập các phần tử của mảng trong C.
int main()
{
    int n;
    printf("input size of array n: ");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("\nnhap %d so phan tu vao mang: \n",n);
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    int TongChan=0, TongLe=0, Tong=0;
    for (i=0; i<n; i++) {
        Tong=Tong+a[i];
        if (i%2==0) {
            TongChan=TongChan+a[i];
        }
        else {
            TongLe=TongLe+a[i];
        }
    }
    printf("\ntong cac phan tu trong mang la: %d",Tong);
    printf("\ntong cac phan tu chan trong mang la: %d",TongChan);
    printf("\ntong cac phan tu le trong mang la: %d",TongLe);
    return 0;
}
