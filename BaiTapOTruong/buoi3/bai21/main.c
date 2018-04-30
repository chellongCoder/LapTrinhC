#include <stdio.h>
#include <stdlib.h>
//Bài Tập 21: Yêu cầu Bài tập C
//Viết một chương trình hiển thị một menu có các lựa chọn để tính diện tích các hình tròn, hình chữ nhật, hình tam giác tương ứng với dữ liệu đã nhập.
int main()
{
    printf("lua chon 1: tinh duyen tich hinh tron.");
    printf("\nlua chon 2: tinh dien tich hinh chu nhat.");
    printf("\nlua chon 3: tinh dien tich hinh tam giac.");
    int chon;
    printf("\nnhap vao lua chon: ");
    scanf("%d",&chon);
    switch (chon) {
        case 1: {
            int r;
            const float pi = 3.14;
            printf("\nnhap vao ban kinh hinh tron: ");
            scanf("%d",&r);
            printf("dien tich hinh tron la: %.2f",r*r*pi);
        } break;
        case 2: {
            int height, width;
            printf("nhap vao chieu dai: ");
            scanf("%d",&width);
            printf("nhap vao chieu rong: ");
            scanf("%d",&height);
            printf("dien tich hinh chu nhat la: %d",(height*width));
        }break;
        case 3: {
            int cao, day;
            printf("nhap vao chieu cao: ");
            scanf("%d",&cao);
            printf("nhap vao do rong day: ");
            scanf("%d",&day);
            printf("dien tich tam giac la: %d",(1/2)*cao*day);
        }
    }
    return 0;
}
