#include <stdio.h>
#include <stdlib.h>
//Bài tập 15: Chuyển chữ hoa thành chữ thường và ngược lại
//Viết chương trình C để nhập một chuỗi, sau đó chuyển chữ hoa thành chữ thường và chữ thường thành chữ hoa rồi in chuỗi kết quả trên màn hình.
void ChuyenChu (char *s) {
    int i=0;
    while (s[i]!=NULL) {
        if (s[i]>='a' && s[i]<='z') {
            s[i]=s[i]-32; //trừ đi 32 để ra chữ hoa
        }
        else if (s[i]>='A' && s[i]<='Z') {
            s[i]=s[i]+32; //cộng 32 để ra chữ thường
        }
        i++;
    }
}
int main()
{
    char chuoi[30];
    printf("nhap mot chuoi: ");
    fflush(stdin);
    gets(chuoi);
    ChuyenChu(chuoi);
    printf("sau khi chuyen doi, chuoi co dang: ");
    printf("%s",chuoi);
    return 0;
}
