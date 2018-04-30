#include <stdio.h>
#include <stdlib.h>
//Bài tập 4: Kiểm tra năm nhuận
//Bài tập kiểm tra một năm xem có phải là năm nhuận không là một bài tập hơi phức tạp một chút.
// Trước hết, chúng ta tìm hiểu điều kiện để một năm là năm nhuận:
// Năm chia hết cho 4 nhưng không chia hết cho 100.
// Hoặc năm chia hết cho 400.
int main()
{
    int nam;
    printf("nhap mot nam bat ki de kiem tra: ");
    scanf("%d",&nam);
    if (nam%4==0 && nam%100!=0 || nam%400==0) {
        printf("%d la nam nhuan.\n",nam);
    }
    else {
        printf("%d khong phai nam nhuan.",nam);
    }
    return 0;
}
