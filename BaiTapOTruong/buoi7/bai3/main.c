#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Chia chuỗi thành các ký tự riêng lẻ
//Viết chương trình C để chia một chuỗi thành các ký tự riêng lẻ. Ví dụ: Chuỗi ban đầu:
//helloworld.com Chia chuỗi thành các ký tự riêng lẻ: h e l l o w o r l d . c o m
void ChiaChuoi (char chuoi[]) {
    int i=0;
    while (chuoi[i]!=NULL) {
        printf("%c ",chuoi[i]); //in ra từng kí tự
        i++;
    }
}
int main()
{
    char chuoi[30];
    printf("Nhap vao chuoi: ");
    gets(chuoi);
    ChiaChuoi(chuoi);
    return 0;
}
