#include <stdio.h>
#include <stdlib.h>
//6/Viết chương trình xuất ra màn hình dãy Fibonaci (1 1 2 3 5 8 13…)
int main()
{
    int a=0;
    int b=1;
    int c=0;
    int n;
    printf("nhao vao so hang cuoi cung: ");
    scanf("%d",&n);
    printf("%4d%4d",0,1);
    while (c<n) {
        c=a+b;
        a=b;
        b=c;
        if (c>n) {
            break;
        }
        printf("%4d",c);
    }
    return 0;
}
