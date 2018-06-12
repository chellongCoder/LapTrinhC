#include <stdio.h>
#include <stdlib.h>
//tạo 1 mảng và xóa 1 phần tử ở vị trí bất kì trong mảng đó
void NhapMang(int a[], int n){
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void XuatMang(int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
}
void XoaPhanTu (int a[], int n, int ViTriXoa) {
    while(ViTriXoa<n) {
        a[ViTriXoa]=a[ViTriXoa+1];
        ViTriXoa++;
    }
}
int main()
{
    int n;
    printf("\nenter the size of arr: ");
    scanf("%d",&n);
    int a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    int ViTriXoa;
    do{
        printf("\nenter ViTriXoa: ");
        scanf("%d",&ViTriXoa);
    }while(ViTriXoa<0 || ViTriXoa>n);
    XoaPhanTu(a,n,ViTriXoa);
    printf("\nArray'elements was deleted: ");
    n--;
    XuatMang(a,n);
    return 0;
}
