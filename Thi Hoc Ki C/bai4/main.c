#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Câu 4:Viết chương trình giải hệ 2 phương trình bậc nhất    , với a, b, c, d, e, f, là các hệ số thực nhập vào từ bàn phím.
    //Thông báo kết quả ra màn hình.
    float a1,b1,c1,a2,b2,c2,x,y,z,D,Dx,Dy;
        printf("nhap vao lan luot cac he so\n");
        scanf("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);
        D=a1*b2-a2*b1;
        Dx=c1*b2-b1*c2;
        Dy=a1*c2-a2*c1;
    if (D!=0) {
        x=Dx/D;
        y=Dy/D;
        printf("phuong trinh co 2 ngiem la: x1=%0.2f, x2=%0.2f\n",x,y);
    }
    else {
        if (Dy==0 && Dx==0) {
        printf("phuong trinh vo so nghiem\n");
        }
        if (Dx!=0 && Dy!=0) {
        printf("phuong trinh vo nghiem\n");
        }
    }
    return 0;
}
