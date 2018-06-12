#include <stdio.h>
#include <stdlib.h>
/*
Input
Hai số thực a, b trên hai dòng khác nhau, trong đó:
-10000.0 < a, b < 10000.0
và b ‡ 0

Output
In ra màn hình các thông tin sau:
Dòng 1: "a   = " (có 3 dấu cách trước dấu =) và giá trị của a
Dòng 2: "b   = " (có 3 dấu cách trước dấu =) và giá trị của b
Dòng 3: "a+b = " và giá trị của tổng a+b
Dòng 4, 5, 6: tương tự như dòng 3 nhưng cho các phép toán trừ, nhân, chia (theo đúng trật tự này)
Yêu cầu: Các giá trị số thực được in ra với 10 vị trí, với 3 vị trí dành cho phần thập phân. Vẫn xuống xòng khi in xong dòng kết quả cuối cùng.

Example
Input:
-715.1
0.13

Output:
a   =   -715.100
b   =      0.130
a+b =   -714.970
a-b =   -715.230
a*b =    -92.963
a/b =  -5500.769
*/
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    printf("a   = %10.3f\n",a);
    printf("b   = %10.3f\n",b);
    printf("a+b = %10.3f\n",a+b);
    printf("a-b = %10.3f\n",a-b);
    printf("a*b = %10.3f\n",a*b);
    printf("a/b = %10.3f\n",a/b);
    return 0;
}
