#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//viết chương trình nhập vào 3 số thỏa mãn điều kiện 3 cạnh 1 tam giác.
//sau đó tính chu vi và diện tích của tam giác và in ra các giá trị vừa tính
int main()
{
    int a,b,c;
    do {
        printf("\nnhap vao canh a: ");
        scanf("%d",&a);
        printf("\nnhap vao canh b: ");
        scanf("%d",&b);
        printf("\nnhap vao canh c: ");
        scanf("%d",&c);
        if (!(a+b>c && b+c>a && c+a>b)) {
            printf("\nmoi ban nhap lai 3 canh tam giac!");
        }
    }while (!(a+b>c && b+c>a && c+a>b));
    printf("\n chu vi tam giac abc: %d",a+b+c);
    float p=(float)(a+b+c)/2;
    printf("\ndien tich tam giac abc: %.2f", (float)sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}
