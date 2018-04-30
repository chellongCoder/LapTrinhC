#include <stdio.h>
#include <stdlib.h>
//Bài tập 14: Kiểm tra tam giác
//Yêu cầu bài tập C này là nhập 3 số dương bất kỳ và sau đó kiểm tra xem 3 số này có phải là 3 góc của tam giác không.
int main()
{
    float a,b,c;
    printf("nhap vao so do goc a: ");
    scanf("%f",&a);
    printf("nhap vao so do goc b: ");
    scanf("%f",&b);
    printf("nhap vao so do goc c: ");
    scanf("%f",&c);
    if (a+b+c==180) {
        printf("day la 3 goc 1 tam giac.");
    }
    else {
        printf("day khong phai 3 goc 1 tam giac.");
    }
    return 0;
}
