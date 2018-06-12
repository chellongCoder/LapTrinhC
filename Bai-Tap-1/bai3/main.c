#include <stdio.h>
#include <stdlib.h>
//Bài 3: Nhập vào hai số nguyên a, b. In ra màn hình tổng, hiệu, tích, thương của hai số trên
int Tong(int a, int b) {
    return a+b;
}
int Hieu(int a, int b) {
    return a-b;
}
int Tich (int a, int b) {
    return a*b;
}
float Thuong (int a, int b) {
    if (b==0) {
        printf("\ndeo tinh dc!");
        return 0;
    }
    return (float)a/b;
}
int main()
{
    int a,b;
    printf("input integer a: ");
    scanf("%d",&a);
    printf("\n input inteer b: ");
    scanf("%d",&b);
    printf("\nTong=%d",Tong(a,b));
    printf("\nHieu=%d",Hieu(a,b));
    printf("\nTich=%d",Tich(a,b));
    printf("\nThuong\=%.2f",Thuong(a,b));
    return 0;
}
