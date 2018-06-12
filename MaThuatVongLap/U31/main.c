#include <stdio.h>
#include <stdlib.h>
/*
*
blank line
***
blank line
*****
blank line
*******
..............
*/
int main()
{
    int n;
    printf("input the variable of the star triagle'height: ");
    scanf("%d",&n);
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++) {
            if (i%2!=0) {
                printf("blank line");
                break;
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
