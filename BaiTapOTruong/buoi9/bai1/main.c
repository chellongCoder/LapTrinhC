#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Bài tập 1: Đọc và in các phần tử mảng
//Viết chương trình C để khai báo một mảng, sau đó lưu giữ các phần tử vào mảng rồi in các phần tử mảng này trên màn hình.
void NhapMang (int *a, int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d] = ",i);
        scanf("%d",(a+i));
    }
}
void XuatMang (int *a, int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%-4d",*(a+i));
    }
}
int main()
{
    srand(time(NULL));
    int *a;
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("=============nhap mang==============\n");
    NhapMang(a,n);
    printf("===========in mang=================\n");
    XuatMang(a,n);
    free(a);
    return 0;
}
