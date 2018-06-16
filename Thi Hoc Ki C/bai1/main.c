#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//Câu 1: Viết chương trình giải phương trình bậc hai: ax2 + bx + c = 0, với a, b, c là các hệ số thực nhập vào từ bàn phím

int main()
{
    int a,b,c;
    float x,x1,x2;
    printf("nhap vao 3 so a,b,c: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a==0) { //luc nay phuong trinh tro thanh Bx+C=0
        if (b==0) {
            if (c==0) {
                printf("phuong trinh vo so nghiem\n");
            }
            else {
                printf("phuong trinh vo nghiem\n");
            }
        }
        else {
            printf("phuong trinh co nghiem duy nhat x=%0.2f\n", (float)-c/b);
        }
    }
    else {
        float denta=(float)b*b - 4*a*c;
        if (denta>0) {
            x1= (float) (-b+sqrt(denta)) / (2*a);
            x2= (float) (-b-sqrt(denta)) / (2*a);
            printf("phuong trinh co 2 nghiem phan biet x1=%0.2f, x2=%0.2f\n",x1,x2);
        }
        if (denta==0) {
            x=(float) -b/(2*a);
            printf("phuong trinh co nghiem duy nhat x=%0.2f\n",x);
        }
        if (denta<0) {
            printf("phuong trinh vo nghiem tren tap so thuc! co 2 nghiem tren tap so phuc\n");
            int _denta=-denta; // vi denta nho hon 0 nen _denta >0, se lay can dc
            printf("x1= %0.2f + i*%0.2f\n",(float)-b/(2*a), (float)sqrt(_denta)/ (2*a));
            printf("x2= %0.2f - i*%0.2f\n",(float)-b/(2*a), (float)sqrt(_denta)/ (2*a));
        }
    }
    return 0;
}
