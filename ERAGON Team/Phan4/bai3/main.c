#include <stdio.h>
#include <stdlib.h>
//nhập vào 1 số thực và in ra phần nguyên của số thực đó
int main()
{
    float a; //khai báo 1 số thực a
    printf("nhap vao so a: ");
    scanf("%f",&a);
    int x=a*2; //xét trường hợp a=(i).5, khai báo 1 số nguyên bằng 2 lần a. ví dụ: a=3.5 => x=7 là số nguyên
    if (x%2==1) {
        printf("phan nguyen cua so a la: %0.0f",a-0.5); // nếu x chia 2 dư 1, thì a có dạng (i).5, trừ đi 0.5 là ra phần nguyên
    }
    else {
    printf("phan nguyen cua so a la: %0.0f",a); // làm tròn số
    }
    return 0;
}
