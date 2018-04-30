#include <stdio.h>
#include <stdlib.h>
//Bài Tập 6: Yêu cầu Bài tập C
//Nhập một số m, kiểm tra xem số đó là lớn hơn, nhỏ hơn hoặc bằng 0 và in ra giá trị tương ứng của một số n là 1, -1 hoặc 0
int main()
{
    int m;
    printf("nhap gia tri cua m: ");
    scanf("%d",&m);
    printf("\ngia tri cua m la %d",m);
    if (m>0) {
        printf("\ngia tri tuong ung cua n = 1\n");
    }
    else if (m<0) {
        printf("\ngia tri tuong ung cua n = -1\n");
    }
    else {
        printf("\ngia tri tuong ung cua n la 0\n");
    }
    return 0;
}
