#include<stdio.h>
#include<conio.h>
#include<string.h>
//so sánh 2 chuỗi
int STRLEN (char *s) {
    int i=0;
    while (s[i]!=NULL) {
        i++;
    }
    return i;
}

int STRCMP (char *s1, char *s2) {
    int length1 = STRLEN(s1); //lấy độ dài chuỗi 1
    int length2 = STRLEN(s2);// lấy độ dài chuỗi 2
    int lengthMin = (length1<length2) ? length1 : length2; //câu lênh tìm ra chuỗi có số kí tự ít hơn
    int i;
    //vòng lặp này để kiểm tra xem chuỗi này có là chuỗi con của chuỗi kia hay không
    for (i=0; i<lengthMin; i++) { //so sánh nếu s1 và s2 khác nhau
        if (s1[i]<s2[i]) {
            return -1;
        }
        else if (s1[i]>s2[i]) {
            return 1;
        }
    }
    if (length1<length2) { //so sánh độ dài 2 chuỗi
        return -1;
    }
    else if (length1>length2) {
        return 1;
    }
    return 0; //nếu 2 chuỗi giống y hệt nhau thì return 0
}
int main ()
{
    char s1[100], s2[100];
    printf("nhap vao chuoi 1: ");
    fflush(stdin);
    gets(s1);
    printf("nhap vao chuoi 2: ");
    fflush(stdin);
    gets(s2);
    int kq = STRCMP(s1,s2);
    if (kq==-1 || kq==1) { //nếu 2 chuỗi khác nhau
        printf("2 chuoi khong giong nhau.");
    }
    else if (kq==0) { //nếu 2 chuỗi giống nhau
        printf("2 chuoi giong het nhau.");
    }
    return 0;
}
