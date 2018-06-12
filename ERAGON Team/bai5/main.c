#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//nhập vào 1 kí tự in hoa A..Z hoặc 1 kí tự a...z rồi in ra gia trị của nó trong bảng mà ASCII
int main()
{
    char a[30]; //khai báo 1 kí tự a
    printf("nhap vao ki tu a: ");
    fflush(stdin); // kiểu kí tự %c (character)
    gets(a);
    int i;
    printf("chuoi ki tu chuyen thanh so la: ");
    for (i=0; i<strlen(a); i++) { //strlen(a) là độ dài của chuỗi a
        printf("%d",a[i]); //chuyển kí tự thành sô thập phân nhờ đặc tả %d
    }
    return 0;
}
