#include <stdio.h>
#include <stdlib.h>
//Bài tập 2: Kiểm tra chẵn lẻ
//Yêu cầu bài tập C này là nhập một số bất kỳ từ bàn phím và kiểm tra xem đó là số chẵn hay số lẻ và in ra thông báo tương ứng.
int main()
{
    int a;
    printf("input integer a: ");
    scanf("%d",&a);
    if (a%2==0) {
        printf("%d la so chan\n",a);
    }
    else {
        printf("%d la so le\n",a);
    }
    return 0;
}
