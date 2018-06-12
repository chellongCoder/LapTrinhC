#include <stdio.h>
#include <stdlib.h>
//tính tổng 1!+2+3!+....+n!
/*
int tong (int n) {
    int res=1;
    int i;
    for (i=1; i<=n; i++) {
        res*=i;
    }
    return res;
}
*/
//đệ quy tuyến tính
int tong (int n) {
    if (n==1) {
        return 1;
    }
    else {
        return n*tong(n-1);
    }
}
void TongGiaiThua (int n) {
    int i;
    int sum=0;
    for (i=1; i<=n; i++) {
        sum=sum+tong(i);
    }
    printf("Tong=%d\n",sum);
}

int main()
{
    int n;
    printf("nhap vao so n: ");
    scanf("%d",&n);
    TongGiaiThua(n);
    return 0;
}
