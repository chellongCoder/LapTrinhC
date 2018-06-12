#include <stdio.h>
#include <stdlib.h>
//tính tổng 101+99+97+96=....+3+1
int main()
{
    int i;
    int sum=0;
    for (i=101; i>=1; i=i-2) {
        sum=sum+i;
    }
    printf("sum of the string is: %d",sum);
    return 0;
}
