#include <stdio.h>
#include <stdlib.h>
//Bài 7: Nhập vào hai số nguyên a, b. So sánh xem số nào lớn hơn, số nào nhỏ hơn hay hai số bằng nhau. In kết quả ra màn hình.
int main()
{
    int a,b;
    printf("nhap vao a: ");
    scanf("%d",&a);
    printf("nhap vao b: ");
    scanf("%d", &b);
    if (a>b) printf("\n a>b ");
    else printf("\n a<b ");
    return 0;
}
