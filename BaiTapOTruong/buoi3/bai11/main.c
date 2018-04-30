#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Bài tập 11: Giải phương trình bậc hai Ax^2 + Bx + C = 0
int main()
{
    int a,b,c;
    printf("nhap vao he so a: ");
    scanf("%d",&a);
    printf("nhap vao he so b: ");
    scanf("%d",&b);
    printf("nhap vao he so c: ");
    scanf("%d",&c);
    if (a==0) {
        printf("\nphuong trinh tro thanh phuong trinh bac nhat 1 an!");
        if (b==0) {
            if (c==0) {
                printf("phuong trinh co vo so nghiem!\n");
            }
            else {
                printf("\nphuong trinh vo nghiem");
            }
        }
        else {
            printf("\nphuong trinh co nghiem x = %.2f",(float)-c/b);
        }
    }
    else {
        int denta, _denta;
        float x,x1,x2;
        denta = b*b - 4*a*c;
        if (denta>0) {
            printf("\nphuong trinh co 2 nghiem thuc phan biet: ");
            x1 = (-b + sqrt(denta)) / (2*a);
            x2 = (-b - sqrt(denta)) / (2*a);
            printf("x1=%.2f\tx2=%.2f",x1,x2);
        }
        else if (denta==0) {
            printf("\nphuong trinh co 1 nghiem kep duy nhat: ");
            x = (float)-b/(2*a);
            printf("x=%.2f",(float)x);
        }
        else {
            printf("phuong trinh co 2 nghiem phuc: ");
            _denta = -denta;
            printf("\nx1=%.2f + i*%.2f",(float)-b/(2*a), (float)sqrt(_denta)/(2*a));
            printf("\nx1=%.2f - i*%.2f",(float)-b/(2*a), (float)sqrt(_denta)/(2*a));
        }
    }
    return 0;
}
