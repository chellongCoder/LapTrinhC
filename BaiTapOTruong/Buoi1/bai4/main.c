#include <stdio.h>
#include <stdlib.h>
//Bài tập 4: Tráo đổi giá trị hai số
int main()
{
    int a=5;
    int b=4;
    int temp;
    printf("value of a and b is: a=%d\tb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nvalue of a and b after to be exchanged: a=%d\tb=%d",a,b);
    return 0;
}
