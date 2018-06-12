#include <stdio.h>
#include <stdlib.h>
//Dãy Fibonacci là dãy vô hạn các số tự nhiên bắt đầu bằng hai phần tử 1 và 1,
//các phần tử sau đó được thiết lập theo quy tắc mỗi phần tử luôn bằng tổng hai phần tử trước nó.
//Hãy xác định giá trị của phần tử thứ n trong dãy Fibonacci!

int main()
{
    int a=0;
    int b=1;
    int n,temp;
    printf("nhap vao so phan tu: ");
    scanf("%d",&n);
    int i=0;
    while (i<n) {
        temp=a;
        a=b;
        b=a+temp;
        i++;
    }
    printf("phan tu thu %d trong day fibonacci la: %d",n,a);
    return 0;
}
