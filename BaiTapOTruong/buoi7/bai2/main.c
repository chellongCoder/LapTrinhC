#include <stdio.h>
#include <stdlib.h>
//Bài tập 2: Tìm độ dài chuỗi (không sử dụng hàm)
//Viết chương trình C để tìm độ dài của một chuỗi mà không sử dụng hàm trong thư viện.
int StringLength (char chuoi[]) {
    int i=0;
    while (chuoi[i]!=NULL) {
        i++;
    }
    return i;
}
int main()
{
    char chuoi[30];
    printf("Nhap mot chuoi: ");
    gets(chuoi);
    printf("Do dai chuoi la: %d",StringLength(chuoi));
    return 0;
}
