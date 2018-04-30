#include <stdio.h>
#include <stdlib.h>
//Bài tập 2: Tạo một hàm tự định nghĩa (không có tham số)
//Viết chương trình C để viết một hàm tự định nghĩa để in một thông báo: Một hàm in thông báo: Welcome to C Language!
//Một hàm khác in thông báo: Have a nice day!
void ThongBao_1() {
    char s[];
    printf("nhap thong bao 1: ");
    gets(s);
    printf("thong bao 1: %s\n",s);
}
void ThongBao_2() {
    char s[];
    printf("nhap thong bao 1: ");
    gets(s);
    printf("thong bao 2: %s\n",s);
}
int main()
{
    ThongBao_1();
    ThongBao_2();
    return 0;
}
