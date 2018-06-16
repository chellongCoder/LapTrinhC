#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap vao so n:");
    scanf("%d", &n);
    int T=1, i;
    for (i=1;i<=n;i++)
        {
            T=T*i;
        }
    printf("=> n!=%d",T);
    return 0;
}
