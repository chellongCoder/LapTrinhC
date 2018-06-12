#include <stdio.h>

/*
Input
Cho số nguyên không âm a.
0 <= a <= 2,000,000,000

Output
Hai ký tự "0x", tiếp theo là giá trị của a ở dạng thập lục phân với đủ 8 digit. Các digit là chữ cái được in thường.

Example 1
Input:
64024

Output:
0x0000fa18
*/
int main()
{
    int a;
    scanf("%d",&a);
    printf("%08x",a);
    return 0;
}
