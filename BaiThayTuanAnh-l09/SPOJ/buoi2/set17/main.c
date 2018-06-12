#include <stdio.h>
#include <stdlib.h>
/*
Mật mã Ceasar: Mã hóa một ký tự
Input
plaintext, key

Trong đó:
- plaintext là một chữ cái in hoa
- key là một số không âm: 0 <= key <= 25

Output
ciphertext: kết quả mã hóa bản rõ plaintext với khóa key sử dụng mật mã Ceasar.
*/
int main()
{
    char ch;
    int key;
    scanf("%c %d",&ch,&key);
    if (ch-65+key>26) {
        printf("%c",ch+key-26);
    }
    else {
        printf("%c",ch+key);
    }
    return 0;
}
