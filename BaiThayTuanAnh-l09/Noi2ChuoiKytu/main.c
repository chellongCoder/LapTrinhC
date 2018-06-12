#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* noi_chuoi (char st1[], char st2[])
{
    // 1.Xác định kích thước của chuỗi kết quả
    int len1 = strlen(st1);
    int len2 = strlen(st2);
    int len = len1 + len2;
    // 2. Cấp phát bộ nhớ để chứa kết quả
    char *res ;
    res = (char*)malloc(len+1);

    //3. Sao chép nội dung của 2 chuỗi vào vùng kết quả
    memcpy(res, st1, len1);
    memcpy(res + len1, st2, len2+1);
    //4. Trả về địa chỉ của vùng nhớ
    return res;
}
int main()
{
    int testcases = 1;
    char *st1 = "Hello ";
    char *st2 = "World.......!";
    char *st = noi_chuoi(st1, st2);
    scanf("%d",&testcases);
    puts(st);
    return 0;
}
