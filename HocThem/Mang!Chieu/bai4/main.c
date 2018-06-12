#include <stdio.h>
#include <stdlib.h>
//Bài tập 4: Sao chép mảng
//Viết chương trình C để sao chép các phần tử của mảng này sang mảng khác.
void NhapMang (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        a[i] = rand()%100;
    }
}

void XuatMang (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
}

void SaoChep (int a[], int b[], int n) {
    int i;
    for (i=0; i<n; i++) {
        b[i] = a[i];
    }
    XuatMang(b,n);
}
int main()
{
    srand(time(NULL));
    int n;
    printf("nhap vao so phan tu cua magn: ");
    scanf("%d",&n);
    int a[n];
    printf("nhap cac phan tu vao mang: \n");
    NhapMang(a,n);
    printf("\nmang xuat ra la: ");
    XuatMang(a,n);
    int b[n];
    printf("\nsao chep sang mang moi: ");
    SaoChep(a,b,n);
    return 0;
}
