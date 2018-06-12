#include <stdio.h>
#include <stdlib.h>
int sum (int a, int b) {
    return a+b;
}
int hieu (int a, int b) {
    return a-b;
}
int tich (int a, int b) {
    return a*b;
}
float thuong (int a, int b) {
    if (b==0) {
        printf("\nkhong tinh dc");
        return b;
    }
    else {
        return (float)a/b;
    }
}
int square (int x) {
    return x*x;
}
void HoanVi (int *x, int *y) {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("nhap vao so a: ");
    scanf("%d",&a);
    printf("\nnhap vao so b: ");
    scanf("%d",&b);
    printf("\nTong= %d",sum(a,b));
    printf("\nHieu= %d",hieu(a,b));
    printf("\nTich= %d",tich(a,b));
    printf("\nThuong= %.2f",thuong(a,b));
    int i;
    for (i=1; i<=10; i++) {
        printf("\nsquare of %d is %d ",i,square(i));
    }
    HoanVi(&a,&b);
    printf("after swapping: a=%d\t\tb=%d",a,b);
    return 0;
}
