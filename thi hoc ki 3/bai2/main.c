#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    int i;
    for (i=0;i<255;i++) {
        printf("%d=%c\n",i,i);
    }
*/
    int h;
    do{
    printf("\ninput size of C:");
    scanf("%d",&h);
    if (h<3) {
        printf("\nplease input again: ");
    }
    }while(h<3);
    int i,j;
    for (i=0; i<h; i++) {
        for (j=0; j<h; j++) {
            if (i==0 || i==h-1) {
                printf("%c",178);
            }
            else {
                if (j==0) {
                    printf("%c",178);
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
