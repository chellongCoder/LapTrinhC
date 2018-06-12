#include <stdio.h>
#include <stdlib.h>
//Bài 5: Viết chương trình nhập một chữ cái in hoa và in ra chữ cái in thường tương ứng.
int main()
{
    char x;
    printf("input character x: ");
    scanf("%c",&x);
    printf("\nchu in hoa cua %c la %c",x, x+32);
    return 0;
}
