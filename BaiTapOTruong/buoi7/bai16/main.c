#include <stdio.h>
#include <stdlib.h>
//Bài tập 16: Kiểm tra username và password
//Viết chương trình C để kiểm tra username và password và in ra thông báo rằng người dùng đã nhập đúng hay sai username và password.
int StringLength (char *s) { //đo độ dài chuỗi
    int i=0;
    while (s[i]!=NULL) {
        i++;
    }
    return i;
}
int KiemTraUsername (char *s1, char *username) {
    int length1 = StringLength(s1); //đo độ dài chuỗi 1
    int i,tam;
    if (length1 == StringLength(username)) { //nếu độ dài tài khoản trùng với tài khoản mặc định
        for (i=0; i<length1; i++) {//duyệt chuỗi 1
            if (s1[i]==username[i]) { //nếu các phần tử trong 2 chuỗi là như nhau
                tam=1; //suy ra nhập đúng
            }
            else { //ngược lại nếu phát hiện phần tử khác nhau
                return 0; //trả về sai
            }
        }
         return tam;
    }
}
//kiểm tra password giống y kiểm tra tài khoản
int KiemTraPassword (char *s2, char *password) {
    int length2 = StringLength(s2);
    int i,tam;
    if (length2 == StringLength(password)) {
        for (i=0; i<length2; i++) {
            if (s2[i]==password[i]) {
                tam=1;
            }
            else {
                return 0;
            }
        }
        return tam;
    }
}
int main()
{
    printf("mac dinh username va password la: vietjack va 1234\n");
    char username[] = "vietjack"; //khai báo 2 chuỗi mặc định sẵn
    char password[] = "1234"; //
    char s1[30], s2[30]; //khai báo 2 chuỗi để nhập tài khoản mật khẩu
    do {
        printf("\nnhap username: ");
        gets(s1);
        printf("\nnhap password: ");
        gets(s2);
        printf("%d %d\n",KiemTraPassword(s2,&password), KiemTraUsername(s1,username));
        if (KiemTraUsername(s1,&username)!=1 || KiemTraPassword(s2,&password)!=1) { //nếu không trả về 1
            printf("\nban nhap sai tai khoan hoac mat khau. \n vui long kiem tra lai.");
        }
        else {
            printf("ban da dang nhap thanh cong!"); //nếu trả về 1
        }
    }while (KiemTraUsername(s1,&username)!=1 || KiemTraPassword(s2,&password)!=1); //nếu không trả về 1 thì nhập lại
    return 0;
}
