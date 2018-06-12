#include <stdio.h>
#include <stdlib.h>
#include <math.h> //thêm thư viện math.h để có phép lấy căn
// nhập vào 1 số nguyên, thực dương và in ra căn bậc 2 của nó.
int main()
{
    int a; //khai báo 1 số a nguyên
    printf("nhap vao so a: ");
    scanf("%d",&a);
    float x;
    x=sqrt(a); //gọi x là căn bậc 2 của a
    printf("can bac 2 cua a la: %0.2f\n",x); //in ra giá trị của x, lấy 2 số thập phân sau dấu ,
    /*=================================*/
    float b; // khai báo 1 số thực b
    printf("nhap vao so b: ");
    scanf("%f",&b);
    x=sqrt(b); // gọi x là căn bậc 2 của b
    printf("can bac 2 cua b la: %0.2f",x); //in ra giá trị của x, lấy 2 số thập phân sau dấu ,
    return 0;
}
