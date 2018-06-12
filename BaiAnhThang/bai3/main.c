#include <stdio.h>
#include <stdlib.h>
int TinhMu (int x, int n) {
    int i;
    int res=x;
    for (i=0; i<n; i++) {
        res=res*x;
    }
    return res;
}
void Tong (int x, int n) {
    int sum=0;
    int i;
    for (i=1; i<=n; i++) {
        sum=sum+TinhMu(x,i);
    }
    printf("\ntong = %d",sum);
}
int main()
{
    int n;
    printf("nhap vao so mu: ");
    scanf("%d",&n);
    int x;
    printf("\nnhap vao co so: ");
    scanf("%d",&x);
    Tong(x,n);
    return 0;
}
