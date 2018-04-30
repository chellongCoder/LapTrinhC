#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    printf("nhap a,b:> ");
    scanf("%d%d",&a,&b);
    printf("nhap toan tu:> ");
    fflush(stdin);
    char c;
    scanf("%c", &c);
    switch(c) {
        case '+': {
            printf("%d+%d=%d\n",a,b, (a+b));
        }break;
        case '-': {
            printf("%d-%d=%d\n",a,b, (a-b));
        }break;
        case '*': {
            printf("%d*%d=%d\n",a,b, (a*b));
        }break;
        case '/': {
            printf("%d/%d=%.2f\n",a,b, (float)a/b);
        }break;
        case '^': {
            printf("%d^%d=%.2f\n",a,b, pow(a,b));
        }break;
        default: printf("moi ban nhap lai!\n");
    }
    return 0;
}
