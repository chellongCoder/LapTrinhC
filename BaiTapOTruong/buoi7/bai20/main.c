#include <stdio.h>
#include <stdlib.h>
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
                return start;
            }
        }
    }
    return -1;
}
void STRCAT (char *s1, char *s2) { //kiểu con trỏ trỏ đến chuỗi
    int i=0, j=0;
    while (s1[i]!=NULL) { //duyệt hết chuỗi 1
        i++;
    }
    while (s2[j]!=NULL) { //duyệt sang chuỗi 2
        s1[i]=s2[j]; //lúc này chuỗi 1 đang thêm chuỗi 2 vào sau nó
        i++;
        j++;
    }
    s1[i]=NULL; //nối xong thì cho cuối chuỗi bằng NULL
}
void STRCPY (char *s1, char *s2) { //kiểu 2 con trỏ trỏ đến mảng chuỗi
    int i=0;
    while (s2[i]!=NULL) { //copy chuối 2 vào chuỗi 1 thì duyệt chuỗi 2 đến NULL
        s1[i]=s2[i]; //cop chuỗi 2 vào chuỗi 1
        i++;
    }
    s1[i]=NULL;//cop xong chuỗi 2 thì cho phần tử cuối cùng của chuỗi 1 bằng NULL
}
int main()
{
    char ChuoiLon[100], ChuoiCon[100], ChuoiChen[100];
    printf("nhap vao mot chuoi: ");
    fflush(stdin);
    gets(ChuoiLon);
    printf("nhap chuoi can tim kiem: ");
    fflush(stdin);
    gets(ChuoiCon);
    printf("nhap vao chuoi can chen: ");
    fflush(stdin);
    gets(ChuoiChen);
    printf("%s\t%s\t%s\n",ChuoiLon,ChuoiCon,ChuoiChen);
    //tìm vị trí cần chèn
    int vitri = STRSTR(ChuoiLon,ChuoiCon);
    printf("vi tri can chen la: %d\n",vitri);
    //cắt thành 2 chuỗi con ở vị trí cần chèn đó
    char s1[100], s2[100]; //cắt
    int i;
    int j=0;
    for (i=0; i<StringLength(ChuoiLon); i++) { //duyệt chuỗi lớn
        if (i<vitri) { //từ đầu cho đến vị trí cần cắt là 1 chuỗi s1
            s1[i] = ChuoiLon[i];
        }
        else { //từ vị trí cần cắt đến hết chuỗi lớn là s2
            s2[j] = ChuoiLon[i];
            j++;
        }
    }
    s2[j] = NULL; // sau khi cắt cho cuối mỗi chuỗi bằng NULL
    s1[vitri] = NULL;
    //nối chuỗi mới vào chuỗi đầu tiên sau khi cắt
    STRCAT(s1,ChuoiChen);
    //printf("%s\n",s1);
    //nối chuỗi thứ 2 vào sai chuỗi vừa nối
    STRCAT(s1,s2);
    printf("chuoi ket qua: %s",s1);
    return 0;
}
