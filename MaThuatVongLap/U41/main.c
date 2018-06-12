#include <stdio.h>
#include <stdlib.h>
//tìm tổng và trung bình cộng của tất cả các số chia hết cho 3,5,12 từ 10 đến 500. (ví dụ 60 thì chia hết cho cả 3 số)
int main()
{
    int sum=0, count=0, i;
    for (i=10; i<=500; i++) {
        if (i%3==0 && i%5==0 && i%12==0) { //nếu số đó thỏa mãn 3 điều kiện đề bài
            sum=sum+i;
            printf("%d\n",i);
            count++; //đếm số phần tử để tý nữa tính trung bình
        }
    }
    printf("summation of all the numbers which are completely divisible by 3,5,12 between 10 to 500 is: %d",sum);
    printf("\naverage of all the numbers which are completely divisible by 3,5,12 between 10 to 500 is: %0.1f",(float)sum/count);
    return 0;
}
