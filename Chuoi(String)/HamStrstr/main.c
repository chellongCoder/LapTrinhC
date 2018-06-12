#include <stdio.h>
#include <stdlib.h>
//kiểm tra chuỗi 2 có ở trong chuỗi 1 không

int STRLEN (char *s) { //đo độ dài 2 chuỗi
    int i=0;
    while (s[i]!=NULL) {
        i++;
    }
    return i;
}
int STRSTR (char *s1, char *s2) {
    int length1=STRLEN(s1); //đô dài chuỗi 1
    int length2=STRLEN(s2); //độ dài chuỗi 2
    int i,j,check,start,temp;
    for (i=0; i<length1; i++) { //duyệt chuỗi 1
        if (s1[i] == s2[0]) { //nếu phần tử đầu của chuỗi 2 bằng 1 phần tử nào đó trong chuỗi 1 thì bắt đầu so sánh
            check=1; // biến kiểm tra đúng
            start=i; //vị trí của chuỗi 2 trong chuỗi 1
            temp=start;// biến tạm để duyệt chuỗi 1 sau khi tìm đc chuỗi 2 có thể nằm trong chuỗi 1
            for (j=1; j<length2; j++) { //duyệt chuỗi 2 từ phần tử thứ 2 của chuỗi 2
                temp++; //duyệt tiếp phần tử tiếp theo sau khi phát hiện phần tử bằng nhau của 2 chuỗi
                if (s1[temp]!=s2[j]) { //nếu phần tử nào đó trong chuỗi 2 khác chuỗi 1
                    check=0; // biến kiểm tra sai
                    break;
                }
            }
            if (check==1) { //nếu tìm thaassy chuỗi 2
                return start; //trả về vị trí
            }
        }
    }
    return -1; // không tìm thấy thì trả về -1 là không có
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
    int vitri=STRSTR(s1,s2);
    if (vitri==-1 ){
        printf("chuoi [%s] khong nam trong chuoi [%s]",s2,s1);
    }
    else {
        printf("chuoi [%s] nam trong chuoi [%s] o vi tri %d",s2,s1,vitri);
    }
    return 0;
}
