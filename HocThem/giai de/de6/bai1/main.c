#include <stdio.h>
#include <stdlib.h>
//nhập vào 1 dãy số n bất kì từ bàn phím. đếm tổng các số dương và tổng các
//số âm. tính trung bình cộng của các số dương, trung bình cộng các số âm. in kết quả ra màn hình

int main()
{
    int n;
    printf("nhap so phan tu: ");
    scanf("%d",&n);
    int a[n];
    int i;
    for (i=0; i<n; i++) {
        printf("nhap a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    int dem_so_duong=0, dem_so_am=0;
    int tong_duong=0, tong_am=0;
    for (i=0; i<n; i++) {
        if (a[i]>0) {
            dem_so_duong++;
            tong_duong=tong_duong+a[i];
        }
        else {
            dem_so_am++;
            tong_am=tong_am+a[i];
        }
    }
    printf("co %d so duong, trung binh cong cac so duong: %.2f\n",dem_so_duong, (float)tong_duong/dem_so_duong);
    printf("co %d so am, trung binh cong cac so am: %.2f\n",dem_so_am, (float)tong_am/dem_so_am);

    return 0;
}
