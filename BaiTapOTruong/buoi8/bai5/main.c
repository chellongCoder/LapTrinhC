#include <stdio.h>
#include <stdlib.h>
//Bài tập 4: Tạo hàm để đếm số khoảng trắng trong chuỗi
//Viết chương trình C để viết một hàm tự định nghĩa nhận một chuỗi là tham số được nhập từ bàn phím, sau đó đếm số khoảng trống trong một chuỗi đó.
int dem_khoang_trang (char *s) {
    int i=0;
    int dem=0;
    while (s[i]!=NULL) {
        if (s[i]==' ') {
            dem++;
        }
        i++;
    }
    return dem;
}
int main()
{
    char s[100];
    printf("nhap mot chuoi: ");
    fflush(stdin);
    gets(s);
    printf("so khoang trang trong chuoi la: %d",dem_khoang_trang(s));
    return 0;
}
