#include <stdio.h>
#include <stdlib.h>
//tìm phần tử âm cuối cùng của dãy số a1..an
int phanTuAmCuoiCung(int a[], int n) {
    int i;
    for(i=n-1; i>=0; i--) {
        if(a[i]<0) return a[i];
    }
    return 0;
}
int main()
{
    int n;
    printf("nhap n:> ");
    scanf("%d", &n);
    int a[n];
    printf("nhapMang:>\n");
    int i;
    for(i=0; i<n; i++) {
        printf("nhap a[%d]> ", i);
        scanf("%d", &a[i]);
    }
    printf("phan tu am cuoi cung cua day so: ");
    int num = phanTuAmCuoiCung(a,n);
    if(num!=0) {
        printf("%d", num);
    } else {
        printf("khong co phan tu am nao!");
    }
    return 0;
}
