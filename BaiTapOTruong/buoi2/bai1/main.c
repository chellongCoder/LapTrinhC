#include <stdio.h>
#include <stdlib.h>
//Bài tập 1: Đọc và in các phần tử mảng

//Viết chương trình C để khai báo một mảng, sau đó lưu giữ các phần tử vào mảng rồi in các phần tử

//mảng này trên màn hình.
int main()
{
    int n;
    printf("input size of array a: ");
    scanf("%d",&n);
    printf("\nnhap %d phan tu cua mang\n",n);
    int a[n];
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("in cac phan tu cua mang:\t");
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
    return 0;
}
