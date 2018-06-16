#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, k;
    printf("Nhap so phan tu cua mang :");
    scanf("%d",&n);
    int a[n];
        {
            for(i=1;i<=n;i++)
                {
                    printf("Nhap a[%d]:", i);
                    scanf("%d", &a[i]);
                }
        }
    printf("\nMang da cho:");
        {
            for(i=1;i<=n;i++)
                {
                    printf("\t%d", a[i]);
                }
        }

    return 0;
}
