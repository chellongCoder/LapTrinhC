#include <stdio.h>
#include <stdlib.h>
// ax + by = c
// dx + ey = f
int giai_he (int a, int b, int c, int d, int e, int f, float *x, float *y) {
    int det, detx, dety;
    det = a*e - b*d;
    detx = c*e - b*f;
    dety = a*f - c*d;
    if (det!=0) {
        *x = (float)detx/det;
        *y = (float)dety/det;
        return 1;
    }
    else {
        if (detx==0 || dety==0) {
            return -1;
        }
        else {
            return 0;
        }
    }
}
int main()
{
    int a,b,c,d,e,f;
    float x,y;
    printf("nhap vao cac he so: \n");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    int check = giai_he(a,b,c,d,e,f,&x,&y);
    if (check == 1) {
        printf("phuong trinh co nghiem: \n");
        printf("x = %.2f\n",x);
        printf("y = %.2f",y);
    }
    else if (check ==-1) {
        printf("phuong trinh vo nghiem\n");
    }
    else {
        printf("phuong trinh vo so nghiem\n");
    }
    return 0;
}
