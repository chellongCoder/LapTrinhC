#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[30];
    fflush(stdin);
    gets(string);
    int length = strlen(string);
    printf("DO DAI CHUOI LA: %d", length);
    return 0;
}
