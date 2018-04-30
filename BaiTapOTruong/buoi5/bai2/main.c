#include <stdio.h>
#include <stdlib.h>
//Bài tập 2: In mảng theo chiều đảo ngược
//Viết chương trình C để nhập các phần tử mảng, sau đó in các phần tử mảng theo chiều đảo ngược.
//Bài tập in mảng theo chiều đảo ngược là bài tập khá thường gặp trong nhiều ngôn ngữ lập trình.
//Bài tập C này giúp bạn làm quen với các khái niệm: khai báo mảng, khởi tạo mảng, in các phần tử của mảng trong C.
int main()
{
    int n;
    printf("nhap so phan tu can luu giu trong mang: ");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("\nnhap %d phan tu can luu giu trong mang: \n",n);
    for (i=0; i<n; i++) {
        printf("phan tu - %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("\ncac phan tu duoc luu giu trong mang la: \n");
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
    printf("\nin mang theo chieu dao nguoc: ");
    for (i=n-1; i>=0; i--) {
        printf("%4d",a[i]);
    }
    return 0;
}
