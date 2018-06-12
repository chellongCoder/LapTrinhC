#include <stdio.h>
#include <stdlib.h>
//2/Viết chương trình nhập vào một số nguyên N có dạng abc rồi xuất ra màn hình một số đảo ngược có dạng cba
int main()
{
    int n;
    printf("nhap vao so n: ");
    scanf("%d",&n);
    int du;
    printf("so %d bi dao nguoc la: ");
    do {
        du=n%10;
        printf("%d",du);
        n=n/10;
    }while (n!=0);
    return 0;
}
