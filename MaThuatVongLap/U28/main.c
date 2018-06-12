#include <stdio.h>
#include <stdlib.h>
//*
//**
//***
//****
//.......

int main()
{
    int n;
    printf("input the height of star triagle: ");
    scanf("%d",&n);
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
