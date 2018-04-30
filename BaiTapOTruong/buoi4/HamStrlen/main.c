#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// nhập 1 chuỗi kí tự rồi đếm độ dài của chuỗi
int StringLength (char s[]) { //dùng kiểu mảng chuỗi
    int i=0;
    while (s[i]!=NULL) { //duyệt mảng chuỗi đến NULL
        i++; //đếm số kí tự trong mảng
    }
    return i; //trả về độ dài chuỗi
}
int STRLEN (char *s) { //kiểu con trỏ trỏ đến mảng chuỗi
    int dem=0;
    while (s[dem]!=NULL) {
        dem++;
    }
    return dem; //trả về độ dài chuối
}
int main()
{
    char s[30];
    printf("nhap vao chuoi: ");
    fflush(stdin);
    gets(s); //nhập 1 chuỗi
    printf("\n do dai cua chuoi la: %d",StringLength(s));
    printf("\ndo dai cua chuoi la: %d", STRLEN(s));
    return 0;
}
