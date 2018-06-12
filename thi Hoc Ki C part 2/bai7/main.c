#include <stdio.h>
#include <stdlib.h>
//7/Viết chương trình liệt kê tất cả các số N có 3 chữ số bằng tổng lập phương các chữ số của nó. VD: N=abc=a3+b3+c3
int main ()
{
    printf("cac so co 3 chu so thoa man dieu kien abc=a3+b3+c3 la: ");
    int a,b,c;
    for (a=1; a<=9; a++) {
        for (b=0; b<=9; b++) {
            for (c=0; c<=9; c++) {
                if (a*100+b*10+c==a*a*a+b*b*b+c*c*c) {
                    printf("%d%d%d\t",a,b,c);
                }
            }
        }
    }
    return 0;
}





