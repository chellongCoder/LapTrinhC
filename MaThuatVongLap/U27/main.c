#include <stdio.h>
#include <stdlib.h>
// in ra các số từ 100 đến 200 mà các số đó chia hết cho 3 và 5
int main()
{
    int i;
    for (i=100; i<=200; i++) {
        if (i%3==0 && i%5==0) {
            printf("%4d",i);
        }
    }
    return 0;
}
