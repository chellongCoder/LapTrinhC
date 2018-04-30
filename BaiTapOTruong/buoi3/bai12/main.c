#include <stdio.h>
#include <stdlib.h>
//Bài tập 12: Nhập một nhiệt độ và in thông báo tương ứng
//Hiển thị thông báo theo các tiêu chí sau:
//Nhiệt độ < 0 thì thông báo là thời tiết giá rét
//Nhiệt độ 0-10: thời tiết rất lạnh
// Nhiệt độ 10-20: thời tiết lạnh
// Nhiệt độ 20-30: thời tiết bình thường
// Nhiệt độ 30-40: thời tiết nóng
//Nhiệt độ >= 40: thời tiết rất nóng
int main()
{
    int temperature;
    printf("nhap nhiet do ngoai troi: ");
    scanf("%d",&temperature);
    if (temperature<0) {
        printf("\nthoi tiet gia ret.");
    }
    else if (temperature>=0 && temperature<10) {
        printf("\nthoi tiet rat lanh.");
    }
    else if (temperature>=10 &&  temperature<20) {
        printf("\nthoi tiet lanh.");
    }
    else if (temperature>=20 && temperature<30) {
        printf("\nthoi tiet binh thuong");
    }
    else if (temperature>=30 && temperature<40) {
        printf("\nthoi tiet nong.");
    }
    else if (temperature>=40) {
        printf("thoi tiet rat nong.");
    }
    return 0;
}
