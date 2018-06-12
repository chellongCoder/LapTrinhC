#include <stdio.h>
#include <stdlib.h>
//tạo 1 mảng gồm 5 phần tử, tính giá trị trung bình của những phần tử lớn hơn 100
int main()
{
    int myarray[5];
    printf("enter turn to turn the value of each element: \n");
    int i;
    int sum=0, count=0;
    for (i=0; i<5; i++) {
        scanf("%d",&myarray[i]);
        if (myarray[i]>100) {
            count++;
            sum=sum+myarray[i];
        }
    }
    printf("the average of integers which are greater than 100 is: %0.2f",(float)sum/count);
    return 0;
}
