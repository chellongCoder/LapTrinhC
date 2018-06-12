#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Câu 6:  Viết chương trình tìm bội số chung nhỏ nhất của hai số nguyên dương nhập vào từ bàn phím.
    int a,b;
        printf("nhap vao so a: ");
        scanf("%d", &a);
        printf("nhap vao so b: ");
        scanf("%d", &b);
    int BCNN,du;
        BCNN=a*b;
    while (b!=0) {
        du=a%b;
        a=b;
        b=du;
    }
    printf("USCNN= %d\n",a);
    BCNN=BCNN/a;
    printf("BSCNN= %d\n",BCNN);
    return 0;
}
