#include <stdio.h>
#include <stdlib.h>
//Bài tập 10: Xét tuyển thi đại học
//Yêu cầu bài tập C này là nhập điểm thi ba môn Toán, Lý, Hóa của một thí sinh, kiểm tra theo tiêu chí đã cho,
//sau đó thông báo thí sinh có trúng tuyển hay không
//Tiêu chí:
//Điểm Toán >= 6.5
// Điểm Lý >= 5.5
//Điểm Hóa >= 5.0
// Tổng điểm ba môn >= 18.0
// hoặc Tổng điểm Toán và Vật lý >= 14.0
int main()
{
    float toan, ly, hoa;
    printf("nhap diem toan: ");
    scanf("%f",&toan);
    printf("\nnhap diem ly: ");
    scanf("%f",&ly);
    printf("\nnhap diem hoa: ");
    scanf("%f",&hoa);
    printf("\nTong diem 3 mon: %.2f",(toan+ly+hoa));
    printf("\nTong diem toan va ly: %.2f",(toan+ly));
    if (toan>=6.5 && ly>=5.5 && hoa>=5.0) {
        if ((toan+ly+hoa)>=18 || (toan+ly)>=14) {
            printf("\nchuc mung ban da trung tuyen!");
        }
        else {
            printf("\nchuc mung ban da tach!");
        }
    }
    else {
        printf("\n chuc mung ban da tach!");
    }
    return 0;
}
