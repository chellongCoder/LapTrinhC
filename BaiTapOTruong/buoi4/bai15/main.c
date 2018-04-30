#include <stdio.h>
#include <stdlib.h>
//Bài tập 15: In dãy Fibonacci
//Viết chương trình C để in n số đầu tiên trong dãy Fibonacci với n được nhập từ bàn phím.
int main()
{
    int a=0;
    int b=1;
    int n,temp;
    printf("nhap vao n so hang: ");
    scanf("%d",&n);
    int count=0;
    printf("\n%d so dau tien trong chuoi fibonacci la: ",n);
    while (count<n) {
        printf("%-4d\t",a);
        temp=a;
        a=b;
        b=a+temp;
        count++;
    }

    return 0;
}
