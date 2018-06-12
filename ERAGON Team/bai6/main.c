#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số thực và làm tròn số đó.
int main()
{
    float a; //khai báo 1 số thực a
    printf("nhap vao so a: ");
    scanf("%f",&a);
    printf("so %f sau khi lam tron la %0.0f",a,a); // đặc tả %0.0f làm tròn số
    return 0;
}
