#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("SO_NGUYEN.txt", "r");
    int n;
    fscanf(fp,"%d",&n);
    printf("%d\n\n",n);
    int c,i=1;
    while (!feof(fp)) {
        fscanf(fp,"%d",&c);
        printf("%-4d",c);
        if (i%10==0) {
            printf("\n");
        }
        i++;
    }
    fclose(fp);
    return 0;
}
