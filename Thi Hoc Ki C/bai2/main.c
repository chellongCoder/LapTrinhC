#include <stdio.h>
#include <stdlib.h>
//Câu 2:  Viết chương trình nhập vào tổng thu nhập GDP của nước ta năm 2014 (tính theo USD) và tốc độ tăng trưởng kinh tế bình quân nào đó.
// In ra màn hình thu nhập GDP của các năm theo dạng:
	//Năm	GDP
	//2014	100 -> GDP(nam sau) = GDP(nam truoc) + GDP (nam truoc)*do tang truong
	//2015	112.5
	//. . .	. . .
//cho đến năm có GDP >= 2 lần năm 2014 thì dừng.


int main ()
{
    int nam=2014;
    float DoTangTruong, GDP, i;
    printf("nhap vao GDP nam 2014: ");
    scanf("%f",&GDP);
    printf("nhap vao do tang truong hang nam: ");
    scanf("%f",&DoTangTruong);
    printf("%s %12s\n","nam","GDP");
    for (i=GDP; i<=GDP*2; i=i+i*DoTangTruong) {
        printf("%d %12.2f\n",nam, i);
        nam++;
    }
    return 0;
}
