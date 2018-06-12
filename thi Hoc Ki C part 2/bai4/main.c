#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//4/Liệt kê tất cả các số nguyên tố nhỏ hơn 1000
int KiemTra (int x) {
    if (x<=1) {
        return 1;
    }
    int j;
    for (j=2; j<x; j++) {
        if (x%j==0) {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int i;
    printf("cac so nguyen to nho hon 1000 la: \n");
    for (i=0; i<1000; i++) {
        if (KiemTra(i)==0) {
            printf("%4d",i);
        }
    }
    return 0;
}
