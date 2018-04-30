#include <stdio.h>
#include <stdlib.h>
//Bài tập 10: Tìm ký tự xuất hiện nhiều nhất trong chuỗi
//Viết chương trình C để nhập một chuỗi, sau đó tìm ký tự xuất hiện nhiều nhất trong chuỗi đó và in kết quả trên màn hình.
//Ví dụ: Nhập chuỗi: VietJack xin chao cac ban Ký tự xuất hiện nhiều lần nhất là 'a' và xuất hiện 4 lần
int StringLength (char *s) { // đo độ dài chuỗi
    int i=0;
    while (s[i]!=NULL) {
        i++;
    }
    return i;
}
int Dem (char *s, char x) { //đếm từng phần tử trong chuỗi
    if (x == ' ') { //không đếm kí tự cách
        return 0;
    }
    int i;
    int dem=0;
    for (i=0; i<StringLength(s); i++) {
        if (s[i]==x) { // nếu tìm thấy giống thì đếm
            dem++;
        }
    }
    return dem;
}
void NhieuNhat (char *s) {
    int max = Dem(s, s[0]); //cho max bằng số lần đếm đc của phần tử đầu tiên
    printf("%d",max);
    int i;
    char c;
    for (i=1; i<StringLength(s); i++) { //duyệt chuỗi
        if (Dem(s, s[i]) > max) { //nếu số lần đếm của các phần tử sau lớn hơn
            max = Dem(s, s[i]); //thì lấy luôn phần tử đó
            c = s[i]; //lấy phần tử đó ra
        }
    }
    printf("\nphan tu %c xuat hien nhieu nhat: %d lan",c,max);
}
int main()
{
    char chuoi[100];
    printf("nhap mot chuoi: ");
    fflush(stdin);
    gets(chuoi);
    NhieuNhat(chuoi);
    return 0;
}
