#include <stdio.h>
#include <stdlib.h>

//viết chương trình tính giá trị chu vi và diện tích của 1 hình tròn sau đó in các giá trị
//vừa tính đc ra màn hình trong đó dữ liệu bán kính dc nhập từ bàn phím
int main()
{
    const float pi=3.14;
    int r;
    printf("nhap vao ban kinh hinh tron: ");
    scanf("%d",&r);
    printf("\ndien tich hinh tron la: %.2f",(float)r*r*pi);
    return 0;
}
