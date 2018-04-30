#include <stdio.h>
#include <stdlib.h>
//Bài tập 1: Nhập hai số và kiểm tra hai số có bằng nhau không
int main()
{
    int a,b;
    printf("input a: ");
    scanf("%d",&a);
    printf("input b: ");
    scanf("%d",&b);
    if (a==b) {
        printf("%d va %d la bang nhau\n",a,b);
    }
    else {
        printf("%d va %d khong bang nhau\n",a,b);
    }
    return 0;
}
