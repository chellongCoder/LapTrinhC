#include <stdio.h>
#include <stdlib.h>
/*
Input
Cho số nguyên dương a.
0 < a < 1000

Output
0, nếu a không chia hết cho 7
1, nếu a chia hết cho 7
Lưu ý: sau kết quả KHÔNG xuống dòng!

Example 1
Input:
21

Output:
1
Example 2
Input:
25

Output:
0
*/
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",a%7==0);
    return 0;
}
