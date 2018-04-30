#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Bài tập 12: Sắp xếp chuỗi
//Viết chương trình C để nhập 3 chuỗi từ bàn phím, sắp xếp các chuỗi rồi in kết quả trên màn hình.
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

void SapXep (char s[][20], int n) {
    int i,j;
    char t[20];
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (STRCMP(s[i],s[j])>0) { //giống kiểu sắp xếp nổi bọt, nhg với chuỗi thì phải dùng các hàm để so sánh
                //hàm strcmp cho kq 0 nếu 2 chuỗi giống nhau, là 1 nếu s1>s2; là -1 nếu s1<s2
                strcpy(t, s[i]); //đổi vị trí chuỗi
                strcpy(s[i], s[j]);
                strcpy(s[j], t);
            }
        }
    }
}
int main()
{
    int n;
    printf("nhap vao so chuoi: ");
    scanf("%d",&n);
    char s[n][20]; //mảng chuỗi gồm n chuỗi
    int i;
    for (i=0; i<3; i++) {
        printf("nhap chuoi %d: ",i);
        scanf("%s",s[i]);
    }
    SapXep(s,n);
    for (i=0 ;i<3; i++) { //xuất chuỗi
        printf("%s\n",s[i]);
    }
    return 0;
}
