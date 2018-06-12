#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo file có 1 chuỗi bất kì rồi in chuỗi ra màn hình
int main()
{
    srand(time(NULL));
    FILE *fp;
    fp = fopen("chuoi.txt", "w");
    int i;
    char a[1000];
    for (i=0; i<1000; i++) {
        a[i]=rand()%1000;
    }
    for (i=0; i<1000; i++) {
        fprintf(fp,"%-2c",a[i]);
    }
    fclose(fp);
    fp = fopen("chuoi.txt", "r");
    for (i=0; i<1000; i++) {
        fscanf(fp,"%c",&a[i]);
        printf("%-4c",a[i]);
    }
    fclose(fp);

    return 0;
}
