#include <stdio.h>
#include <stdlib.h>
// viết 1 đoạn văn vào file rồi in ra màn hình console
int main()
{
    FILE *fp;
    fp = fopen("paragraph.txt", "r+");
    char c;
    while (!feof(fp)) {
        c = fgetc(fp);
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}
