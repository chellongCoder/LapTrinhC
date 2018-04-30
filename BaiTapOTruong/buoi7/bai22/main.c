#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//chuẩn hoas văn bản

void Xoa_Khoang_Trang_Thua (char *s, int length) {
    int i,j;
    int dem;
    dem=0;
    int tam;

    for (i=0; i<length; i++) {
        if (s[i]==' ') {
            if (s[i+1]==' '){
                dem++;
                tam=i;
                for (j=tam; j<length; j++) {
                    s[j]=s[j+1];
                }
            }
        }
    }
    for (i=0; i<length-dem; i++) {
        printf("%c",s[i]);
    }
}
int main()
{
    char string[30];
    printf("nhap mot chuoi: ");
    fflush(stdin);
    gets(string);
    int length = strlen(string);
    Xoa_Khoang_Trang_Thua(string,length);
    return 0;
}
