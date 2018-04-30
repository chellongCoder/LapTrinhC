#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Tìm tổng(chẵn, lẽ) các phần tử mảng
//Viết chương trình C để nhập các phần tử mảng, sau đó tìm tổng các phần tử của mảng và hiển thị kết quả trên màn hình.
void NhapMang (int *a, int n) {
    int i;
    for (i=0; i<n; i++) {
        *(a+i) = rand()%100;
    }
}
void XuatMang (int *a, int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%-4d",*(a+i));
    }
}
int sum (int *a, int n) {
    int i;
    int tong=0;
    for (i=0; i<n; i++) {
        tong = tong + *(a+i);
    }
    return tong;
}
int main()
{
    srand(time(NULL));
    int *a;
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    NhapMang(a,n);
    printf("===========in mang=================\n");
    XuatMang(a,n);
    int tong = sum(a,n);
    printf("\ntong (chan, le) cac phan tu trong mang la: %d",tong);
    free(a);
    return 0;
}

