#include <stdio.h>
#include <stdlib.h>
//nhập vào 1 dãy n số, tìm giá trị lón nhất và giá tị nhỏ nhất của dãy số, in kết quả và vị trí của max và min ra màn hình
void nhap_mang (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("phan tu a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void xuat_mang (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%-4d", a[i]);
    }
}
void tim_max_min (int a[], int n) {
    int i;
    int vi_tri_max, vi_tri_min;
    int max=a[0], min=a[0];
    for (i=0; i<n; i++) {
        if (a[i]>max) {
            max = a[i];
            vi_tri_max = i;
        }
        if (a[i]<min) {
            min=a[i];
            vi_tri_min = i;
        }
    }
    printf("\ngia tri lon nhat la a[%d]: %d",vi_tri_max,max);
    printf("\ngia tri lon nhat la a[%d]: %d",vi_tri_min,min);
}
int main()
{
    int n;
    printf("nhap vao kich thuoc mang: ");
    scanf("%d", &n);
    int a[n];
    nhap_mang(a,n);
    xuat_mang(a,n);
    tim_max_min(a,n);
    return 0;
}
