#include <stdio.h>
#include <stdlib.h>
//Bài 6: Viết chương trình nhập một số nguyên dương n và in ra các số trong khoảng từ n đến n bình.
int main()
{
    int n;
    printf("input integer n: ");
    scanf("%d",&n);
    int i;
    for (i=n; i<=n*n; i++) { //cho chạy từ n đến n bình
        printf("%4d",i);
    }
    return 0;
}
