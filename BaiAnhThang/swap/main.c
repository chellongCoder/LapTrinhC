#include <stdio.h>
#include <stdlib.h>
int giaithua (int n) {
    int i;
    int s=1;
    for (i=1; i<n; i++) {
        s=s*i;
    }
    return s;
}
float tong (int n) {
    float s=0;
    int i;
    for (i=1; i<n; i++) {
        s+=1.0/giaithua(i);
    }
    return s;
}
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("tong = %.2f",tong(n));
    return 0;
}
