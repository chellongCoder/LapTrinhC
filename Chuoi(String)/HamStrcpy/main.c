#include <stdio.h>
#include <stdlib.h>
//copy chuỗi 1 vào chuỗi 2

//cách 1
void STRCPY (char *s1, char *s2) { //kiểu 2 con trỏ trỏ đến mảng chuỗi
    int i=0;
    while (s2[i]!=NULL) { //copy chuối 2 vào chuỗi 1 thì duyệt chuỗi 2 đến NULL
        s1[i]=s2[i]; //cop chuỗi 2 vào chuỗi 1
        i++;
    }
    s1[i]=NULL;//cop xong chuỗi 2 thì cho phần tử cuối cùng của chuỗi 1 bằng NULL
}
//cách 2
int STRLEN (char *s) { //viết hàm tính độ dài chuỗi
    int i=0;
    while (s[i]!=NULL) {
        i++;
    }
    return i;
}
void STRCPY_2 (char s1[], char s2[]) {
    int length=STRLEN(s2); //đo độ dài chuỗi 2 (chuỗi 2 copy sang chuỗi 1)
    int i;
    for (i=0; i<length; i++) { //duyệt hết chuỗi 2
        s1[i]=s2[i];
    }
    s1[length]=NULL; //copy xong 2 vào 1 thì phần tử ngoài khoảng chuỗi 1 cho =NULL
}
int main()
{
    char s1[100], s2[100];
    printf("nhap vao chuoi 1: ");
    fflush(stdin);
    gets(s1);
    printf("nhap vao chuoi 2: ");
    fflush(stdin);
    gets(s2);
    STRCPY(s1,s2);
    STRCPY_2(s1,s2);
    printf("chuoi 2 copy vao chuoi 1 la: %s",s1);

    return 0;
}
