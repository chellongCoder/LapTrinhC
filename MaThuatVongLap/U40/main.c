#include <stdio.h>
#include <stdlib.h>
/*
1 1
12 21
123 321
1234 4321
12345 54321
123456 654321
*/
int main()
{
    int n;
    printf("input the variable of number pattern's height: ");
    scanf("%d",&n);
    int i,j;
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            printf("%d",j);

        }
        printf(" ");
        for (j=i; j>=1; j--) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
