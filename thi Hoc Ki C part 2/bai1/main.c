#include <stdio.h>
#include <stdlib.h>
//1/Tính tổng S=1+2+3+….+n
int main()
{
    int n;
    printf("nhap vao n so hang: ");
    scanf("%d",&n);
    int S=0;
    int i;
    for (i=0; i<=n; i++) {
        S=S+i;
    }
    printf("Tong cua %d so hang la: %d",n,S);
    return 0;
}
