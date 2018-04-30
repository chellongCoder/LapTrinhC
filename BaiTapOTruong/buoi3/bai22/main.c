#include <stdio.h>
#include <stdlib.h>
//Bài Tập 22: Yêu cầu Bài tập C
//Viết một chương trình C hiển thị menu có các lựa chọn để thực hiện các phép toán cơ bản (+, -. *, /) hai số.
//Đây là bài tập C cơ bản minh họa giúp bạn cách sử dụng lệnh SWITCH ... CASE trong C.
int main()
{
    int a,b;
    printf("nhap so nguyen thu nhat: ");
    scanf("%d",&a);
    printf("nhap vao so thu hai: ");
    scanf("%d",&b);
    int chon;
    printf("\nduoi day la cac lua chon:");
    printf("\n1 - phep cong.");
    printf("\n2 - phep tru.");
    printf("\n3 - phep nhan.");
    printf("\n4 - phep chia.");
    printf("\n\nnhap lua chon cua ban: ");
    scanf("%d",&chon);
    switch (chon) {
        case 1: {
            printf("Tong 2 so la: %d",a+b);
        }break;
        case 2: {
            printf("Hieu 2 so la: %d",a-b);
        }break;
        case 3: {
            printf("tich 2 so la: %d",a*b);
        }break;
        case 4: {
            if (b==0) {
                printf("nhap so thu 2 bang 0 -> khong thuc hien duoc phep chia cho 0");
            }
            else {
                printf("thuong 2 so la: %.2f",(float)a/b);
            }
        }break;
    }
    return 0;
}
