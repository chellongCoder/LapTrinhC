#include <stdio.h>
#include <stdlib.h>
//Câu 2:  Viết chương trình nhập vào tổng thu nhập GDP của nước ta năm 2014 (tính theo USD) và tốc độ tăng trưởng kinh tế bình quân nào đó.
//In ra màn hình thu nhập GDP của các năm theo dạng:
	//Năm	GDP
	//2014	100
	//2015	112.5
	//. .cho đến năm có GDP >= 2 lần năm 2014 thì dừng.
int main()
{
    int nam = 2014;
    float gdp2014, toc_do_tang_truong;
    printf("nhap vao GDP nam 2014: ");
    scanf("%f",&gdp2014);
    printf("nhap vao toc do tang truong hang nam: ");
    scanf("%f",&toc_do_tang_truong);
    float gdp =  gdp2014;
    printf("%-5s %-5s\n","nam", "gdp");
    while (gdp <= 2*gdp2014) {
        printf("%-5d %-5.2f\n",nam++, gdp);
        gdp = gdp + gdp*(toc_do_tang_truong/100);
    }
    return 0;
}
