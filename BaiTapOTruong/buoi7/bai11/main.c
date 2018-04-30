#include <stdio.h>
#include <stdlib.h>
//Bài tập 11: Sắp xếp mảng các ký tự trong chuỗi theo thứ tự tăng dần
//Viết chương trình C để nhập một chuỗi, sau đó sắp xếp mảng các ký tự trong chuỗi theo thứ tự tăng dần rồi in kết quả trên màn hinh.
//Ví dụ: Nhập chuỗi: vietjack Mảng ký tự theo thứ tự tăng dần: a c e i j k t v
int StringLength (char *s) {
    int i=0;
    while (s[i]!=NULL) {
        i++;
    }
    return i;
}
void SapXep (char *s) {
    int i,j;
    char tam;
    for (i=0; i<StringLength(s); i++) {
        for (j=i+1; j<StringLength(s); j++) { //sắp xếp nổi bọt
            if (s[j]<s[i]) {
                tam=s[i];
                s[i]=s[j];
                s[j]=tam;
            }
        }
        printf("%c ",s[i]);
    }
}

int main()
{
    char chuoi[30];
    printf("nhap mot chuoi: ");
    fflush(stdin);
    gets(chuoi);
    int i,j;
    char tam;
    printf("sau khi sap xep, chuoi co dang: \n");
    SapXep(chuoi);
    return 0;
}
