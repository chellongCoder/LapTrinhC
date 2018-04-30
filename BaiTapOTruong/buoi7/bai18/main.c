#include <stdio.h>
#include <stdlib.h>
//Bài tập 18: Kiểm tra chữ hoa chữ thường
//Viết chương trình C để kiểm tra xem ký tự vừa nhập có phải là chữ cái không,
//sau đó kiểm tra xem đó là chữ hoa hay chữ thường rồi in thông báo tương ứng trên màn hình.
int main()
{
    char kitu;
    printf("nhap 1 ki tu: ");
    scanf("%c",&kitu);
    if (kitu>='a' && kitu<='z') {
        printf("ki tu [%c] la chu thuong!",kitu);
    }
    else if (kitu>='A' && kitu<='Z') {
        printf("ki tu [%c] la chu hoa!",kitu);
    }
    return 0;
}
