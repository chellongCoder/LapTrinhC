#include <stdio.h>
#include <stdlib.h>

int main()
{
//Câu 10:  Nhập vào 2 số là tháng và năm, kiểm tra xem tháng đó có bao nhiêu ngày.
//In kết quả ra màn hình theo dạng: Tháng 3 năm 2014 có 31 ngày.

int month;
int years;
    printf("nhap vao so nam: ");
    scanf("%d", &years);
    printf("nhap vao so thang: ");
    scanf("%d", &month);
switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
        printf("thang %d nam %d co 31 ngay\n",month,years);
    } break;
    case 2: {
        if (years%400==0 || years%4==0 && years%100!=0) {
            printf("thang 2 nam %d co 29 ngay\n",years);
        }
        else {
            printf("thang 2 nam %d co 28 ngay\n",years);
        }
    } break;
    case 4: case 6: case 9: case 11: {
        printf("thang %d nam %d co 30 ngay\n", month, years);
    } break;
}
return 0;
}
