#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Bài tập 13: Kiểm tra tam giác đều, cân, lệch
//Nhập ba cạnh của một tam giác và kiểm tra xem tam giác đó là tam giác đều, tam giác cân hay tam giác lệch.
int main()
{
    int a,b,c;
    printf("nhap vao canh thu nhat: ");
    scanf("%d",&a);
    printf("\nnhap vao canh thu hai: ");
    scanf("%d",&b);
    printf("\nnhap vao canh thu ba: ");
    scanf("%d",&c);
    if (a+b>c && b+c>a && c+a>b) {
        if (a==b && b==c && c==a) {
            printf("day la tam giac deu.");
        }
        else if (a==b || b==c || c==a) {
            if (a==sqrt(b*b + c*c) || b==sqrt(a*a+c*c) || c==sqrt(b*b + a*a)) {
                printf("day la tam giac vuong can.");
            }
            else {
                printf("day la tam giac can.");
            }
        }
        else if (a==sqrt(b*b + c*c) || b==sqrt(a*a+c*c) || c==sqrt(b*b + a*a)) {
            printf("day la tam giac vuong.");
        }
        else {
            printf("day la tam giac thuong.");
        }
    }
    return 0;
}
