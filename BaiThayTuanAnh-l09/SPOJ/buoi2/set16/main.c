#include <stdio.h>
#include <stdlib.h>
/*
Đổi chữ thường thành chữ hoa
Input


Một chữ cái thường trong tiếng Anh

Output
Chữ cái in hoa tương ứng.
Ghi chú: để in ra một chữ cái, trong lệnh printf() cần dùng đặc tả "%c" (tương tự như đặc tả "%d" để in ra một số nguyên)
*/
int main()
{
    char ch;
    scanf("%c",&ch);
    printf("%c",ch-32);
    return 0;
}
