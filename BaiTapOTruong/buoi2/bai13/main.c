#include <stdio.h>
#include <stdlib.h>
//Bài tập 13: Chèn phần tử vào mảng chưa qua sắp xếp
//Viết chương trình C để nhập một mảng (đã sắp xếp theo thứ tự tăng dần), sau đó chèn thêm phần tử mới vào trong mảng rồi in mảng trên màn hình.
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    printf("nhap %d phan tu vao mang: \n",n);
    int a[100];
    int i,j,temp;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\nmang truoc khi chen la: \n");
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
    int PhanTuThem, ViTriThem;
    printf("\nnhap vao vi tri them: ");
    scanf("%d",&ViTriThem);
    printf("nhap vao phan tu them: ");
    scanf("%d",&PhanTuThem);
    n=n+1;
    for (i=n; i>ViTriThem; i--) {
        a[i]=a[i-1];
    }
    printf("mang sau khi chen la:\n");
    a[ViTriThem]=PhanTuThem;
    for (i=0; i<n; i++) {
        printf("%-4d",a[i]);
    }
    return 0;
}
