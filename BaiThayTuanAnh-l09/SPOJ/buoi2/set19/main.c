#include <stdio.h>
#include <stdlib.h>
/*
Vị trí của chữ cái trong bảng chữ cái
Input
Một chữ cái in thường ch.

Output
Vị trí của chữ cái ch trong bảng chữ cái tiếng Anh.

Example
Input:
k

Output:
10
*/
int main()
{
    char ch;
    scanf("%c",&ch);
    printf("%d",ch-97);
    return 0;
}
