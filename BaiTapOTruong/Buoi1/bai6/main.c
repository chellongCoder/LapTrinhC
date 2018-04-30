#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Bài tập 6: Tìm giá trị trung bình
int main()
{
    /*
    srand(time(NULL));
    float a=100.100*rand()/RAND_MAX;
    float b=100.100*rand()/RAND_MAX;
    printf("a=%.2f\tb=%.2f",a,b);
    printf("\nthe average value of a and b: (%.2f+%.2f)/2 = %.2f",a,b,(a+b)/2);
    */
    int n;
    printf("\nenter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("\ninput element of array: ");
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    int sum=0;
    for (i=0; i<n; i++) {
        sum=sum+a[i];
    }
    printf("\naverage value of array: %0.2f",(float)sum/n);
     return 0;
}
