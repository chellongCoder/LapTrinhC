#include <stdio.h>
#include <stdlib.h>
/*
Input
Số nguyên dương a.
0 < a < 1000

Output
0, nếu a là số lẻ
1, nếu a là số chẵn
Lưu ý: Sau câu trả lời phải xuống dòng!

Example 1
Input:
23

Output:
0
*/
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",a%2==0);
    return 0;
}
