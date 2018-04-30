#include <stdio.h>
#include <stdlib.h>
//Bài tập 1: Tính tổng dãy số
//Viết chương trình C để tính tổng 10 số đầu tiên được nhập từ bàn phím. Đây là chương trình C cơ bản và điển hình giúp bạn làm quen với vòng lặp FOR trong C.
int main()
{
    int i;
    int sum=0;
    printf("10 so tu nhien dau tien la: \n");
    for (i=1; i<=10; i++) {
        sum=sum+i;
        printf("%-4d",i);
    }
    printf("\ntong 10 so tu nhien dau tien la: %d",sum);
    return 0;
}
