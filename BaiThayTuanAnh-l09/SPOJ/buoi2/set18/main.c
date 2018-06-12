#include <stdio.h>
#include <stdlib.h>
/*
TABEG018 - Mật mã Ceasar: Giải mã một ký tự
Nếu bạn chưa biết mật mã Ceasar là gì, hãy xem bài tập TABEG017.

Nhiệm vụ lần này là giải mã một ký tự đã được mã hóa bằng mật mã Ceasar.

Input
ciphertext, key
Trong đó:
*ciphertext: là một ký tự (một chữ in hoa), là bản mã của một ký tự nào đó cần tìm.
*key: là khóa được dùng để mã hóa ký tự tìm và tạo ra ciphertext, 0 <= key <= 25

Output
plaintext: kết quả giải mã bản mã ciphertext với khóa key sử dụng mật mã Ceasar
*/
int main()
{
    char ch;
    int key;
    scanf("%c %d",&ch,&key);
    if (ch-65-key<0) {
        printf("%c",ch-key+26);
    }
    else {
        printf("%c",ch-key);
    }
    return 0;
}

