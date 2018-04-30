#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Tạo một hàm tự định nghĩa (có tham số)
//Viết chương trình C để viết một hàm tự định nghĩa nhận một tham số để in một thông báo:
//Nhập một tên bất kỳ, ví dụ: C Language Một hàm in thông báo: Welcome to C Language! Một hàm khác in thông báo: Have a nice day!
char* ThongBao_1 () {
    char *s;
    s = (char*)malloc(100*sizeof(char)); //con trỏ cấp phát động
    printf("nhap thong bao 1: ");
    fflush(stdin);
    gets(s);
    return s;
}
char* ThongBao_2 () {
    char *s;
    s = (char*)malloc(100*sizeof(char));
    printf("nhap thong bao 2: ");
    fflush(stdin);
    gets(s);
    return s;
}
int main()
{
    printf("in thong bao 1: %s\n",ThongBao_1());
    printf("in thong bao 2: %s",ThongBao_2());
    return 0;
}
