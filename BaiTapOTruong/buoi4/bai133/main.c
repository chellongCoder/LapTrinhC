#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, end;
    printf("nhap vao so bat dau day so: ");
    scanf("%d",&first);
    printf("nhap vao so ket thuc day so: ");
    scanf("%d",&end);
    int i,j,sum=0;
    printf("\ncac so hoan hao co trong day la: ");
    for (i=first; i<=end; i++) {
        sum=0;
        for (j=1; j<i; j++) {
            if (i%j==0) {
                sum=sum+j;
            }
        }
        if (sum==i) {
            printf("%-4d",i);
        }
    }
    return 0;
}
