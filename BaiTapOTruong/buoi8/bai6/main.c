#include <stdio.h>
#include <stdlib.h>
//Bài tập 5: Tạo hàm để tráo đổi giá trị
//Viết chương trình C để tạo một hàm tự định nghĩa nhận hai số nguyên làm tham số để tráo đổi giá trị của hai số này.
void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b;
    printf("nhap vao 2 so a, b: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("gia tri cua a la: %d\n",a);
    printf("gia tri cua b la %d.",b);
    return 0;
}
