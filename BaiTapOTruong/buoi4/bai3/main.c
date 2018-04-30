#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Kiểm tra số nguyên tố
//Nhập một số và kiểm tra xem đó có phải là số nguyên tố không và hiển thị thông báo phù hợp.
// Đây là bài tập C cơ bản giúp bạn làm quen với cách sử dụng vòng lặp FOR cũng như cách sử dụng lệnh IF ELSE trong C.
int main()
{
    int i,count=0,x;
    printf("nhap mot so bat ki: ");
    scanf("%d",&x);
    for (i=1; i<=x; i++) {
        if (x%i==0) {
           count++;
        }
    }
    if (count==2) {
        printf("so da cho la so nguyen to.");
    }
    else {
        printf("so da cho khong phai so nguyen to.");
    }
    return 0;
}
