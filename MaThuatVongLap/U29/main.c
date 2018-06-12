#include <stdio.h>
#include <stdlib.h>
//nhập 1 số và in ra kết quả khi cho số đó nhân lần lượt từ 1 đến 10
//ví dụ 5*1=5 5*2=10 5*3=15 ...

int main()
{
    int i,n;
    printf("enter the input number: ");
    scanf("%d",&n);
    for (i=1; i<=10; i++) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
