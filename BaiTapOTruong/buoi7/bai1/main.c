#include <stdio.h>
#include <stdlib.h>
//Bài tập 1: Nhập và in chuỗi
//Viết chương trình C để nhập một chuỗi từ bàn phím, rồi sau đó in chuỗi trên màn hình.
//Đây là bài tập C cơ bản giúp bạn làm quen với cách khai báo một biến kiểu string trong C.

int main()
{

    char chuoi[30];
    printf("Nhap 1 chuoi: ");
    fflush(stdin);
    gets(chuoi);
    printf("Ban vua nhap chuoi: ");
    puts(chuoi);
    return 0;
}
