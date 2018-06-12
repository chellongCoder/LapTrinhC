#include <stdio.h>
#include <stdlib.h>
/*
...........
******
*****
****
***
**
*
*/

int main()
{
    int n;
    printf("input the variable of the star striagle's height: ");
    scanf("%d",&n);
    int i,j;
    for (i=n; i>0; i--) {
        for (j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
