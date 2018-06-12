#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,bieuthuc;
     printf("nhap so a: \n");
     scanf("%d", &a);

     printf("nhap so b: \n");
     scanf("%d", &b);

     a++;
     ++b;
     bieuthuc= ((a+b)-(a++)) - b*(++b*(a*b));

     printf("gia tri bieu thuc la: %d", bieuthuc);
    return 0;
}
