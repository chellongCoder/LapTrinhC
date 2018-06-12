#include <stdio.h>
#include <stdlib.h>
//viết hàm đổi chữ hoa thành chữ thường
int STRLEN (char *s) { // tính độ dài chuỗi
    int i=0;
    while (s[i]!=NULL) {
        i++;
    }
    return i;
}
void STRLWR (char *s) {
    int length=STRLEN(s);
    int i;
    for (i=0; i<length; i++) { //duyệt hết chuỗi
        if (s[i]>='A' && s[i]<='Z') { //nếu nằm trong khoảng từ A->Z
            s[i]=s[i]+32; //công thêm 32 để thành chữ thường
        }
    }
}
int main()
{
    char s[100];
    printf("nhao vao chuoi: ");
    fflush(stdin);
    gets(s);
    STRLWR(s);
    printf("\ndoi chu hoa thanh chu thuong: %s",s);
    return 0;
}
