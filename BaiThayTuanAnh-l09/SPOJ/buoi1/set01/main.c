#include <stdio.h>
#include <stdlib.h>
/*
Input
Hai số tự nhiên x và y, cách nhau bởi dấu cách.
1000 > x >= y > 0

Output
Dòng 1: tổng x + y
Dòng 2: hiệu x - y
Lưu ý: In xong dòng 1 thì cần xuống dòng, nhưng sau dòng 2 thì không xuống dòng.

Example
Input:
7 2

Output:
9
5
*/
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d",a+b, a-b);
    return 0;
}
