#include <stdio.h>
#include <stdlib.h>
//Bài tập 8: Tìm số lớn nhất
//Yêu cầu bài tập C này là tìm số lớn nhất trong 3 số đã nhập từ bàn phím. Đây là bài tập C cơ bản giúp bạn làm quen với lệnh IF ELSE trong C.
int main()
{
    int a,b,c;
    printf("nhap so thu nhat: ");
    scanf("%d",&a);
    printf("\nnhap so thu hai: ");
    scanf("%d",&b);
    printf("\nnhap so thu ba: ");
    scanf("%d",&c);
    int max=a;
    if (b>max) {
        max=b;
    }
    if (c>max) {
        max=c;
    }
    if (max==a) printf("so thu nhat la so lon nhat\n");
    if (max==b) printf("so thu hai la so lon nhat\n");
    if (max==c) printf("so thu ba la so lon nhat\n");
    return 0;
}
