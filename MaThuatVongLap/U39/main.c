#include <stdio.h>
#include <stdlib.h>
/*
*******
 *****
  ***
   *
  ***
 *****
*******
*/
int main()
{
    int n;
    printf("input the variable of the star pattern's height: ");
    scanf("%d",&n);
    int i,j;
    for (i=0; i<2*n+1; i++) { // luôn là số lẻ
        if (i<n) { //tam giác cân ngược không in ra dòng cuối cùng (tức laf 1 dấu *)
            for (j=0; j<2*n+1; j++) {
                if (j<i || j>2*n-i) { //đầu đoạn và cuối đoạn đối xứng nhau
                    printf(" ");
                }
                else {
                    printf("*");
                }
            }
        }
        else { //(i>=n)tam giác cân xuôi
            for (j=0; j<2*n+1; j++) {
                if (j<2*n-i || j>i) { //đầu đoạn và cuối đoạn
                    printf(" ");
                }
                else {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
