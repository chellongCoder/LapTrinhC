#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Bài 9 (0.5 điểm). Bạn Tèo đăng ký tài khoản Facebook. Tên tài khoản thì ok rồi, tuy nhiên mật khẩu (password) thì đang suy nghĩ.
//Bạn Tèo cần password từ 5 đến 9 kí tự mà mỗi kí tự nằm trong phạm vi từ ‘a’ tới ‘z’.
//Hãy sinh ra một chuỗi password ngẫu nhiên thỏa mãn yêu cầu của bạn Tèo.
int main()
{
    /*
    int i;
    for (i=0; i<255; i++) {
        printf("%d=%c\n",i,i);
    }
    */
    srand(time(NULL));
    char a[9];
    int n;
    n=5+rand()%(9-5);
    int i;
    for (i=0; i<n; i++) {
        a[i]=97+rand()%(122-97);
        printf("%c",a[i]);
    }
    return 0;
}
