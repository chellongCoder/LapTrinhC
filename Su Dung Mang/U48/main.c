#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 1 mảng gồm n phần tử (các phần tử nhỏ hơn 100), tính tổng các phần tử chẵn và các  phần tử lẻ trong mảng
int main()
{
    srand(time(NULL));
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int myarray[n];
    int i;
    for (i=0; i<n; i++) {
        myarray[i]=rand()%100;
    }
    int sum_odd=0;
    int sum_even=0;
    for  (i=0; i<n; i++) {
        printf("%4d",myarray[i]);
        if (myarray[i]%2==0) {
            sum_even=sum_even+myarray[i];
        }
        else {
            sum_odd=sum_odd+myarray[i];
        }
    }
    printf("\nsum of odd values: %d",sum_odd);
    printf("\nsum of even values: %d",sum_even);
    return 0;
}
