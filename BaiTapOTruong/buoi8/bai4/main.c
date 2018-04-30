#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Tạo một hàm tự định nghĩa để tính tổng hai số
//Viết chương trình C để viết một hàm tự định nghĩa nhận hai tham số để tính tổng của hai số.
int sum (int a, int b) {
    int tong = a+b;
    return tong;
}
int main()
{
    int a,b;
    printf("nhap vao 2 so a, b: ");
    scanf("%d%d",&a,&b);
    printf("tong 2 so a, b la: %d",sum(a,b));
    return 0;
}
