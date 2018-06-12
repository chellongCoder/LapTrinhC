#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a[99];
    int n;
        printf("nhap vao n phan tu\n");
        scanf("%d", &n);
        nhapmang(a,n);
        printf("xuat ra cac phan tu cua mang\n");
        xuatmang(a,n);
    int ViTrithem, PhanTuThem;
    do{
        printf("nhap vao vi tri them (0=>%d) ",n);
        scanf("%d",&ViTrithem);
    }while(ViTrithem<0 || ViTrithem>n);
        printf("\nnhap vao phan tu them ");
        scanf("%d", &PhanTuThem);
        ThemPhanTu(a,n,ViTrithem,PhanTuThem);
        xuatmang2(a,n);
        exit(0);

    return 0;
}
void nhapmang (int a[], int n)
{
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d", &a[i]);
    }
}
void xuatmang (int a[], int n)
{
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= %d ",i, a[i]);
    }
}
// THÊM PHẦN TỦ VÀO MẢNG
    void ThemPhanTu (int a[], int n, int ViTriThem, int PhanTuThem) {
        int i;
        for (i=n; i>=ViTriThem; i--) {
            a[i]=a[i-1];
        }
            a[ViTriThem]=PhanTuThem;
            //n++;
         // hiện tại nhập vào đang có n-1 phần tử nên cho chạy từ n thì phải thêm 1 vị trí nữa
    }
    void xuatmang2(int a[], int n) {
        int i;
        for (i=0; i<=n; i++) {
            printf("a[%d]=%d  ",i,a[i]);
        }
    }


