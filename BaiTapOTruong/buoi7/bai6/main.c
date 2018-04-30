#include <stdio.h>
#include <stdlib.h>
//Bài tập 6: So sánh hai chuỗi
//Viết chương trình C để so sánh hai chuỗi để xem hai chuỗi này có bằng nhau không.
//Ví dụ: Chuỗi 1: Bai tap C co giai Chuỗi 2: Bai tap C co giai --> Hai chuỗi là bằng nhau
int StringLength (char chuoi[]) { //đo độ dài chuỗi
    int i=0;
    while (chuoi[i]!=NULL) {
        i++;
    }
    return i;
}
int StringCompare (char chuoi1[], char chuoi2[]) { //hàm so sánh chuỗi
    int i;
    int temp; //biến tạm
    for (i=0; i<StringLength(chuoi1); i++) { //duyệt hết chuỗi, sau khi 2 chuỗi có độ dài bằng nhau rồi thì chọn độ dài chuỗi nào cũng đc
        if (chuoi1[i] == chuoi2[i]) { //nếu các phần tử trong chuỗi bằng nhau hết thì tạm =1
            temp=1;
        }
        else { //ngược lại thì tam = 0
            temp=0;
        }
    }
    if (temp == 1) {
        return 1;
    }
    return 0;
}
int main()
{
    char chuoi1[30], chuoi2[30];
    printf("nhap chuoi 1: ");
    fflush(stdin);
    gets(chuoi1);
    printf("nhap chuoi 2: ");
    fflush(stdin);
    gets(chuoi2);
    if (StringLength(chuoi1) == StringLength(chuoi2)) { // so sánh độ dài 2 chuỗi trc
        if (StringCompare(chuoi1, chuoi2) == 1) { //sau đó so sánh các phần tử trong chuỗi
            printf("hai chuoi CO do dai bang nhau \n va 2 chuoi cung giong nhau");
        }
        else {
            printf("2 chuoi CO do dai bang nhau \n nhung 2 chuoi KHONG giong nhau");
        }
    }
    else {
        printf("2 chuoi KHONG co do dai bang nhau \n vay 2 chuoi KHONG giong nhau.");
    }
    return 0;
}
