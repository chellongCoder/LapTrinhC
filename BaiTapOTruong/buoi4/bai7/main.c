#include <stdio.h>
#include <stdlib.h>
//Bài tập 7: Hiển thị và tính tổng các số chẵn
//Viết chương trình C để hiển thị và tính tổng n số chẵn. Đây là bài tập C cơ bản giúp bạn làm quen với cách sử dụng vòng lặp FOR trong C.
// Ví dụ: bạn nhập số các số là 5 Hiển thị các số lẻ: 2 4 6 8 10 Tổng 5 số lẻ là: 30
int main()
{
    int x;
    printf("nhap so cac so: ");
    scanf("%d",&x);
    int i=0, j=0,sum=0;
    printf("hien thi cac so le:\n");
    while (i<x) {
        if (j%2==0) {
            printf("%-4d",j);
            i++;
            sum=sum+j;
        }
        j++;
    }
    printf("\nTong %d so le la: %d",x,sum);
    return 0;
}
