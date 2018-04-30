#include <stdio.h>
#include <stdlib.h>
/*
***********
***** *****
****   ****
***     ***
**       **
***********
*/
int main()
{
     int h; // kích thước
     printf("nhap vao kich thuoc: ");
     scanf("%d",&h);
     int i,j;
     for (i=0; i<2*h+1; i++) {
        printf("*");
     }
     printf("\n");
     for (i=0; i<h; i++) {
        for (j=0; j<2*h+1; j++) {
            if (j<=h+i && j>=h-i) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
     }
      for (i=0; i<2*h+1; i++) {
        printf("*");
     }
    return 0;
}
