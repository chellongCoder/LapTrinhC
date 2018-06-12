#include <stdio.h>
#include <stdlib.h>
/*
Bài tập 1: Đọc và in các phần tử mảng
Viết chương trình C để khai báo một mảng, sau đó lưu giữ các phần tử vào mảng rồi in các phần tử mảng này trên màn hình.
*/
//con trỏ tham chiếu đến mảng
/*
int main()
{
    int a[10];
    int *p;
    p = a;
    int i;
    printf("nhap mang\n");
    for (i=0; i<10; i++) {
        printf("phan tu thu a[%d]: ",i);
        scanf("%d",(p+i));
    }
    printf("xuat mang\n");
    for (i=0; i<10; i++) {
        printf("%-4d",*(p+i));
    }
    return 0;
}
*/
int main ()
{
    int *p;
    int n;
    printf("nhap vao n: ");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    int i;
    printf("nhap mang\n");
    for (i=0; i<n; i++) {
        printf("phan tu thu a[%d]: ",i);
        scanf("%d",(p+i));
    }
    printf("xuat mang\n");
    for (i=0; i<n; i++) {
        printf("%-4d",*(p+i));
    }
    return 0;
}
