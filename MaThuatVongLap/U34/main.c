#include <stdio.h>
#include <stdlib.h>
// viết chường trình in ra bảng chữ cái alphabet (A->Z)
int main()
{
    //=======cách 1========
    char var; //variety
    for (var='A'; var<='Z'; var++) {
        printf("%4c",var);
    }
    //========cách 2 (in theo ASCII)======
    printf("\n");
    int i;
    for (i=65; i<=90; i++) { //65 là A, 90 là Z
        printf("%c\n",i);
    }
    return 0;
}
