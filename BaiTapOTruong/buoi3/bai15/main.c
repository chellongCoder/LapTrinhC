#include <stdio.h>
#include <stdlib.h>
//Bài tập 15: Kiểm tra nguyên âm, phụ âm
//Yêu cầu bài tập C này là nhập một chữ cái và kiểm tra xem đó là nguyên âm hay phụ âm.
int main()
{
    char kitu;
    printf("nhap mot chu cai: ");
    scanf("%c",&kitu);
    switch (kitu) {
        case 'a': case 'e': case 'i': case 'o': case 'u': {
            printf("chu cai ban vua nhap la nguyen am.");
        }break;
        default: {
            printf("chu cai ban vua nhap la phu am.");
        }
    }
    return 0;
}
