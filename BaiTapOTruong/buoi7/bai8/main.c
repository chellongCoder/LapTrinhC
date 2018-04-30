#include <stdio.h>
#include <stdlib.h>
//Bài tập 8: Sao chép chuỗi
//Viết chương trình C để sao chép các ký tự từ chuỗi này sang chuỗi khác.
int StringLength (char chuoi[]) {
    int i=0;
    while (chuoi[i]!=NULL) {
        i++;
    }
    return i;
}
void StringCopy (char chuoi1[], char chuoi2[]) {
    int i;
    for (i=0; i<StringLength(chuoi1); i++) {
        chuoi2[i] = chuoi1[i];
    }
    chuoi2[StringLength(chuoi1)] = NULL; //copy xong phải cho cuối chuỗi bằng NULL
    puts(chuoi2); //xuất chuỗi
}
int main()
{
    char chuoi1[30];
    printf("nhap chuoi 1: ");
    fflush(stdin);
    gets(chuoi1);
    printf("in chuoi ban dau: ");
    puts(chuoi1);
    char chuoi2[30];
    printf("\nin chuoi sao: ");
    StringCopy(chuoi1,chuoi2);
    return 0;
}
