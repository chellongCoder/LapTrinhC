#include <stdio.h>
#include <stdlib.h>
//3/Nhập vào một số nguyên N (có 3 chữ số) rồi tính tổng các số của số nguyên N.
//VD:123 => 1+2+3=6
int main()
{
    int n;
    printf("nhap vao so n: ");
    scanf("%d",&n);
    printf("tong cac chu so cua so %d la: ",n);
    int du;
    int S=0;
    do{
        du=n%10;
        S=S+du;
        n=n/10;
    }while(n!=0);
    printf("%d",S);
    return 0;
}
