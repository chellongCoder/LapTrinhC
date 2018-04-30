#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Kiểm tra âm dương
//Yêu cầu bài tập C này là nhập một số, kiểm tra xem số đó là số âm hay số dương và in ra thông báo tương ứng
int main()
{
    int a;
    do {
    printf("input integr a: ");
    scanf("%d",&a);
    }while (a==0);
    if (a>0) {
        printf("%d la so duong\n",a);
    }
    else {
        printf("%d la so am\n",a);
    }
    return 0;
}
