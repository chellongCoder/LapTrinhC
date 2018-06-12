#include <stdio.h>
#include <stdlib.h>
//in ra các số chia hết cho 2 trong khoảng từ 1 đến 100
int main()
{
    int i;
    for (i=1; i<=100; i++) {
        if (i%2==0) {
            printf("%4d",i);
        }
    }
    return 0;
}
