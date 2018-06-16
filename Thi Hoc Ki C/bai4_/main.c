#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d, e,f, D, Dx,Dy;
    printf("Nhap vao he so a, b, c:");
    scanf("%f%f%f",&a,&b,&c);

    printf("Nhap vao he so d, e, f:");
    scanf("%f%f%f",&d,&e,&f);
    D = a*e-b*d;
    Dx= c*e-b*f;
    Dy= a*f-c*d;

    if(D!=0)
    {
        printf("He co nghiem duy nhat: x=%.3f, y=%.3f", Dx/D, Dy/D);
    }
    return 0;
}
