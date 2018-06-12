#include <stdio.h>
#include <stdlib.h>
//nối 2 chuỗi làm 1
void STRCAT (char *s1, char *s2) { //kiểu con trỏ trỏ đến chuỗi
    int i=0, j=0;
    while (s1[i]!=NULL) { //duyệt hết chuỗi 1
        i++;
    }
    while (s2[j]!=NULL) { //duyệt sang chuỗi 2
        s1[i++]=s2[j++]; //lúc này chuỗi 1 đang thêm chuỗi 2 vào sau nó

    }
    s1[i]=NULL; //nối xong cho cuối chuỗi bằng NULL
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
    printf("\nchuoi S1 truoc khi noi la: %s",s1);
    printf("\nchuoi S2 truoc khi noi la: %s",s2);
    STRCAT(s1,s2);
    printf("\nchuoi S2 noi vao chuoi S1 la: %s",s1);

    return 0;
}
