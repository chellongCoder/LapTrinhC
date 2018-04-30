#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Bài tập 7: Chuyển đổi độ C thành độ K và độ F
//Công thức chuyển đổi độ C thành độ K và độ F như sau:
// 1 K = 1 C + 273
// 1 F = C * 18/10 + 32
int main()
{
    srand(time(NULL));
    float C=40.100*rand()/RAND_MAX;
    printf("output value of temperature(C): %.2f",C);
    printf("\nC->F: %.2f->%.2f",C,(C+273));
    printf("\nC->F: %.2f->%.2f",C,(C*18/10+32));
    return 0;
}
