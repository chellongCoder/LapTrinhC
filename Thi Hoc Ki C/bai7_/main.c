#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Nhap ba so a, b ,c:");
    scanf("%d%d%d", &a, &b, &c);

    if(a<0||b<0||c<0||(a+b)<=c||(a+c)<=b||(b+c)<=a)
        {
            printf("Ba so tren khong phai ba canh cua mot tam giac");
        }
        else
            {
                if(a==b||b==c||a==c)
                {
                    if(a==b && b==c)
                        printf("=> Tam Giac Deu.");
                    else if((a*a+b*b==c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
                        printf("=> Tam Giac Vuong Can.");
                    else
                        printf("=> Tam Giac Can.");
                }
                else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
                    printf("=> Tam Giac Vuong.");
                else
                    printf("=> Tam Giac Thuong.");
            }
    return 0;
}
