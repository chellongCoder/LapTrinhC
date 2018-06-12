#include <stdio.h>
#include <stdlib.h>
//Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + ... + x^n/N!
int tinhmu (int x, int n) {
    int i;
    int tam=x;
    int temp=1;
    for (i=1; i<=n; i++) {
        x=tam*temp;
        temp=x;
    }
    return x;
}
int giaithua (int n) {
    int i;
    int s=1;
    for (i=1; i<=n; i++) {
        s=s*i;
    }
    return s;
}
float tong (int n, int x) {
    int i;
    float s=0;
    for (i=1; i<=n; i++) {
        s=s+((float)tinhmu(x,i) / giaithua(i));
    }
    return s;
}
int main()
{
    int n,x;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("nhap vao x: ");
    scanf("%d",&x);
    //printf("%d\n",giaithua(x));
    //printf("%d",tinhmu(x,n));
    printf("tong = %.3f",tong(n,x));
    return 0;
}
