#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Bài 1 (1 điểm). Nhập vào 3 số thực. Kiểm tra xem 3 số này có tạo thành 3 cạnh của tam giác hay không.
//Nếu có thì cho biết đây là tam giác gì (3 loại: tam giác thường, tam giác cân, tam giác đều).
int main()
{
     int a,b,c;
     do {
        printf("nhap vao 3 canh a,b,c\n");
        scanf("%d%d%d", &a, &b, &c);
        if (a==0 || b==0 || c==0) {
            printf("\nday khong phai 3 canh 1 tam giac! moi ban nhap lai\n");
        }
     }while(a==0 || b==0 || c==0);
    if (a+b>c || a+c>b || b+c>a) {
        if (a==b || b==c || c==a) {
            if (a==sqrt(b*b+c*c) || b==sqrt(c*c+a*a) || c==sqrt(b*b+a*a)) {
                printf("day la tam giac vuong can\n");
            }
            if (a==b && b==c && a==c) {
                printf("day la tam giac deu\n");
            }
            else {
                printf("day la tam giac can\n");
            }
        }
        else if (a==sqrt(b*b+c*c) || b==sqrt(c*c+a*a) || c==sqrt(b*b+a*a)) {
            printf("day la tam giac can\n");
        }
        else {
            printf("day la 3 canh 1 tam giac thuong\n");
        }
    }
    return 0;
}
