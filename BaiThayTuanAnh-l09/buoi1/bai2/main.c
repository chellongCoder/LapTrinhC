#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Bài toán: Cho số nguyên dương n. Hãy liệt kê các số chính phương không quá n
//Cách giải:
//Viết chương trình kiểm tra tính chính phương
//Duyệt các số từ 1 đến n, kiểm tra tính chính phương và đưa ra thông báo
int main()
{
    //ép kiểu nguyên
    int n;
    printf("nhap vao so nguyen duong n: ");
    scanf("%d",&n);
    int i=sqrt(n);
    if (i*i==n) {
        printf("%d la so chinh phuong.",n);
    }
    return 0;
}
