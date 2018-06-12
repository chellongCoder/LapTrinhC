#include <stdio.h>
#include <stdlib.h>
//tạo 1 mảng có kích thước là 10, nhập từng giá trị trong mảng và tính tổng các phần tử trong mảng đó
int main()
{
    int myarray[10];
    int i;
    int sum=0;
    printf("enter turn to turn the value of element: \n");
    for (i=0; i<10; i++) {
        scanf("%d",&myarray[i]);
        sum=sum+myarray[i];
    }
    printf("\nthe sum of those 10 integer is: %d",sum);
    return 0;
}
