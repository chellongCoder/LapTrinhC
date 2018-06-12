#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//giải phương trình bậc 2 ax^2 +bx +c =0
int main()
{
    int a,b,c,denta;
    printf("nhap vao cac he so a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a==0) {
        printf("phuong trinh tro thanh bx+c=0\n");
        if (b==0) {
            if (c==0) {
                printf("phuong trinh vo so nghiem!");
            }
            else {
                printf("phuong trinh vo nghiem");
            }
        }
        else {
            printf("phuong trinh co nghiem: x = %.2f", (float)-c/b);
            return 0;
        }
    }
    else { //trường hợp a!=0
        printf("phuong trinh tro thanh ax^2 +bx +c = 0\n");
        denta = b*b - 4*a*c;
        if (denta > 0) {
            printf("phuong trinh co 2 nghiem phan biet x1, x2\n");
            printf("x1 = %.2f\n", (float)(-b+sqrt(denta)) / (2*a));
            printf("x2 = %.2f", (float)(-b-sqrt(denta)) / (2*a));
        }
        else if (denta < 0) {
            printf("phuong trinh vo nghiem.");
        }
        else {
            printf("phuong trinh co nghiem duy nhat %.2f\n", (float)-b / (2*a));
        }
    }
    return 0;
}
