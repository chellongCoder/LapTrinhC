#include <stdio.h>
#include <stdlib.h>
/*
Input
Cho hai số nguyên dương a và b cách nhau bởi dấu cách.
0 < a, b  < 1000

Output
1, nếu a lớn hơn b
0, nếu a không lớn hơn b

Example 1
Input:
10 5

Output:
1
*/
int main()
{
    unsigned int a,b;
    scanf("%u%u",&a,&b);
    printf("%u",(a%b==0 && a/b!=0 && a-b!=0) || (a%b!=a && a-b!=0));
    return 0;
}
