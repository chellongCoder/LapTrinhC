#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Bài 8 (0.5 điểm). Write a C program to count the number of letters in a string without using the library function (e.g. strlen).
//A letter is a single alphabetic character: a, b, c, d,…, x, y, z.
//For example: “aZ@q%”  3 letters.

int main()
{
    char a[30];
    printf("input string: ");
    fflush(stdin);
    gets(a);
    int i,dem=0;
    char j;
    int x=strlen (a);
    for (i=0; i<x; i++) {
        for (j='a'; j<='z'; j++) {
            if (a[i]==j) {
                dem++;
            }
        }
    }
    printf("\nletter: %d",dem);
    return 0;
}
