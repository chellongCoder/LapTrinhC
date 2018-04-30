#include <stdio.h>
#include <stdlib.h>

void Hoanvi (int *x, int *y) {

    int tg;
    tg = *x;
    *x = *y;
    *y = tg;
}

int main()
{

    printf("nhap a, b: ");
    int a, b;
    scanf("%d%d", &a, &b);
    Hoanvi (&a,&b);
    printf("%d   %d", a,b);
    return 0;
}
