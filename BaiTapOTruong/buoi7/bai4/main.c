#include <stdio.h>
#include <stdlib.h>
//Bài tập 4: In các ký tự riêng lẻ của chuỗi theo chiều đảo ngược
//Viết chương trình C để in các ký tự riêng lẻ của một chuỗi theo chiều đảo ngược.
//Ví dụ: Chuỗi ban đầu: helloworld.com In các ký tự theo chiều đảo ngược: m o c . d l r o w o l l e h
int StringLength (char chuoi[]) { //đo dộ dài chuỗi
    int i=0;
    while (chuoi[i]!=NULL) {
        i++;
    }
    return i;
}
void DaoChuoi (char chuoi[]) {
    int i = StringLength(chuoi) -1; //duyệt từ phần tử cuối chuỗi về đầu
    while (i>=0) {
        printf("%c ",chuoi[i]);
        i--;
    }
}

int main()
{
    char chuoi[30];
    printf("nhap mot chuoi: ");
    fflush(stdin);
    gets(chuoi);
    printf("in chuoi dao nguoc: ");
    DaoChuoi(chuoi);
    return 0;
}
