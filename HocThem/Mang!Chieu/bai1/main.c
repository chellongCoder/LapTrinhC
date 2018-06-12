#include <stdio.h>
#include <stdlib.h>
//Bài tập 1: Đọc và in các phần tử mảng
//Viết chương trình C để khai báo một mảng, sau đó lưu giữ các phần tử vào mảng rồi in các phần tử mảng này trên màn hình.

void NhapMang ( int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("phan tu - %d: ",i);
        scanf("%d",&a[i]);
    }
}

void XuatMang (int a[], int n) {
    int i;
    printf("\ncac phan tu trong mang la: ");
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
}
int main()
{
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    return 0;
}
