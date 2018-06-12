#include <stdio.h>
#include <stdlib.h>
//viết hàm đổi chữ thường thành chữ hoa
int STRLEN (char *s) { // tính độ dài chuỗi
    int i=0;
    while (s[i]!=NULL) {
        i++;
    }
    return i;
}
void STRUPR (char *s) {
    int length=STRLEN(s);
    int i;
    for (i=0; i<length; i++) { //duyệt hết chuỗi
        if (s[i]>='a' && s[i]<='z') { //nếu nằm trong khoảng từ a->z
            s[i]=s[i]-32; // trù đi 32 để thành chữ hoa
        }
    }
}
int main()
{
    char s[100];
    printf("nhao vao chuoi: ");
    fflush(stdin);
    gets(s);
    STRUPR(s);
    printf("\ndoi chu thuon thanh chu hoa: %s",s);
    return 0;
}
