#include <stdio.h>
#include <stdlib.h>
//viết chương trình nhập phần thực và phần ảo y của 1 số phức,sau đó in ra mẫu (x,y) theo yêu cầu:
    //-số in ra có 2 chữ số sau dấy chấm thập phân
        //-kết quả in ra tạo thành 1 dãy kí tự liên tiếp nhau (không có khoảng trống)
int main()
{
    int y;
    float x;
    printf("nhap vao phan thuc: ");
    scanf("%f",&x);
    printf("\nNhap vao phan ao: ");
    scanf("%d",&y);
    printf("\n%.2f+%di",x,y);
    return 0;
}
