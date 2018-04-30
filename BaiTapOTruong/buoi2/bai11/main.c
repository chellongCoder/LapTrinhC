#include <stdio.h>
#include <stdlib.h>
//Bài tập 11: Sắp xếp mảng theo thứ tự tăng dần
//Viết chương trình C để nhập một mảng, sau đó sắp xếp mảng theo thứ tự tăng dần và in mảng đã sắp xếp trên màn hình.
//Bài tập sắp xếp mảng là bài tập rất phổ biến trong mọi ngôn ngữ lập trình và có nhiều ứng dụng.
// Bài tập C này giúp bạn làm quen với các khái niệm: khai báo mảng, khởi tạo mảng, và cách truy cập các phần tử của mảng trong C.
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    printf("nhap %d phan tu vao mang: \n",n);
    int a[n];
    int i,j,temp;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (a[j]<a[i]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%4d",a[i]);
    }
    return 0;
}
