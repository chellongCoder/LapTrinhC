#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Bài tập 2: Tìm tổng hai số
int main()
{
    srand(time(NULL));
    float a=100.100*rand()/RAND_MAX;
    float b=100.100*rand()/RAND_MAX;
    printf("%.2f+%.2f=%.2f",a,b,a+b);
    return 0;
}
