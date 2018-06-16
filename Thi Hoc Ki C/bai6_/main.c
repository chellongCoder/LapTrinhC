#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Nhap hai so duong a, b:");
    scanf("%d%d", &a,&b);
    if (a<=0 || b<=0)
        {
            printf("Hay nhap hai so duong!");
        }
    else
        {
            int t=a*b;
            while(b!=0)
            {
                int r=a%b;
                a=b;
                b=r;
            }
            printf("=> BCNN = %d", t/a);

        }

    return 0;
}
