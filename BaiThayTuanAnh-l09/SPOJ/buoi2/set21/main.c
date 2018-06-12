#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
TABEG021 - Làm tròn số 1
Giả sử a là một biến kiểu số nguyên, x là một biến kiểu số thực. Nếu muốn làm tròn x và đưa giá trị vào a thì ta có thể dụng câu lệnh như sau

a = round(x);

Trong đó, round() là một hàm thuộc thư viện "math.h" nên muốn sử dụng thì phải có chỉ thị "include <math.h>" ở đầu chương trình, tương tự như việc ta phải khai báo chỉ thị "include <stdio.h>" để có thể sử dụng các hàm scanf() và printf().

Input
Một số thực

Output
Là kết quả làm tròn số thực đã cho

Example
Input:
2.56

Output:
3
*/
int main()
{
    float a;
    scanf("%f",&a);
    int x = round(a);
    printf("%d",x);
    return 0;
}
