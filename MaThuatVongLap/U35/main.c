#include <stdio.h>
#include <stdlib.h>
//viết chương trình tính tổng bình phương từ 5->25
int main()
{
    int i;
    int sum=0;
    for (i=5; i<=25; i++) {
        sum=sum+i*i;
    }
    printf("summation of squares of all numbers from 5 to 25 is: %d",sum);
    return 0;
}
