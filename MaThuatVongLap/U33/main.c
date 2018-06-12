#include <stdio.h>
#include <stdlib.h>
/*
12345678
1234567
123456
12345
1234
123
12
1
*/
int main()
{
    int n;
    printf("input the variable of the number art's height: ");
    scanf("%d",&n);
    int i,j;
    for (i=n; i>0; i--) {
        for (j=1; j<=i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
