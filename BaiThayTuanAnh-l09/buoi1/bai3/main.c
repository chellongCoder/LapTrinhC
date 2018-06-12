#include <stdio.h>
#include <stdlib.h>
//Tìm các số có 3 chữ số mà có giá trị gấp 33 lần tổng 3 chữ số.

int main()
{
    int i,j,k;
    printf("so do la: \n");
    for (i=1; i<=9; i++) {
        for (j=0 ;j<=9; j++) {
            for (k=0; k<=9; k++) {
                if ((100*i + 10*j +k) == 33*(i+j+k)) {
                    printf("%d%d%d",i,j,k);
                }
            }
        }
    }
    return 0;
}
