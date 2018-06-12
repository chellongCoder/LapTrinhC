#include <stdio.h>
#include <stdlib.h>
//nhập số tự nhiên hoặc số thực từ bàn phím, in ra các số vừa nhập. (các số cách nhau)
int main()
{
    int a,b; // giả sử nhập 2 số, khai báo 2 biến kiểu số nguyên
    printf("nhap vao 2 so a,b: \n");

    scanf("%d %d",&a,&b); //%d là kiểu số nguyên

    printf("\n2 so vua nhap la: a=%d, b=%d",a,b);
    return 0;
}
