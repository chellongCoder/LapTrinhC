#include <stdio.h>
#include <stdlib.h>
//Bài tập 17: Tìm vị trí chuỗi con
//Viết chương trình C để tìm kiếm vị trí của chuỗi con trong chuỗi đã cho, rồi in kết quả trên màn hình.
int StringLength (char *s) {
    int i=0;
    while (s[i]!=NULL) {
        i++;
    }
    return i;
}
int STRSTR (char *s1, char *s2) {
    int length1 = StringLength(s1);
    int length2 = StringLength(s2);
    int i,j,check,start,temp;
    int dem=0; //đếm số lần xh của chuỗi con
    for (i=0; i<length1; i++) { //duyệt chuỗi 1
        if (s1[i]==s2[0]) { //nếu phát hiện phần tử đầu của chuỗi 2 có xuất hiện trong chuỗi 1
            check=1; //biến kiểm tra đúng
            start = i;//lấy vị trí chuỗi 2
            temp = start; //
            for (j=1; j<length2; j++) { //duyệt chuỗi 2 từ phần tử sau s2[0]
                temp++; //duyệt tiếp tục s1[i+1], lúc này temp đang bằng i
                if (s1[temp]!=s2[j]) { //nếu phát hiện chuỗi 2 có phần tử khác chuỗi 1
                    check=0; //kiểm tra sai
                    break; //thoát
                }
            }
            if (check==1) { //nếu tìm đc chuỗi 2
                dem++;
            }
        }
    }
    return dem;
}
int main()
{
    char chuoi1[100], chuoi2[30];
    printf("nhap chuoi to: ");
    fflush(stdin);
    gets(chuoi1);
    printf("nhap chuoi 2: ");
    gets(chuoi2);
    printf("chuoi [%s] xuat hien %d lan trong chuoi [%s]!",chuoi2,STRSTR(chuoi1,chuoi2),chuoi1);
    return 0;
}
