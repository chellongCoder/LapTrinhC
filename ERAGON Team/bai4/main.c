#include <stdio.h>
#include <stdlib.h>
//tính S(x,n)=x^n (nhập x,n từ bàn phím và tính S)
int main()
{
    int x,n; // x là cơ số, n là số mũ
    printf("nhap vao co so x: ");
    scanf("%d",&x);
    printf("nhap vao so mu n: ");
    scanf("%d",&n);
    int S=1; //khai báo lúc đầu S=x^n=1
    int i;
    for (i=0; i<n; i++) { //1 vòng lặp chạy n lần với n là số mũ VD: x.x.x...x (n số x)
        S=S*x;
    }
    printf("\nS(x,n)=%d",S);
    return 0;
}
