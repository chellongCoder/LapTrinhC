#include <stdio.h>
#include <stdlib.h>
//Bài tập 20: Nhập tháng và hiển thị số ngày tương ứng
//Yêu cầu bài tập C này là nhập một tháng bất kỳ trong năm và sau đó hiển thị số ngày trong tháng đó
int main()
{
    int thang;
    printf("nhap thang trong nam: ");
    scanf("%d",&thang);
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
            printf("thang co 31 ngay.");
        }break;
        case 4: case 6: case 9: case 11: {
            printf("thang co 30 ngay.");
        }break;
        case 2: {
            printf("thang co 28 ngay (29 ngay neu la nam nhuan).");
        }break;
    }
    return 0;
}
