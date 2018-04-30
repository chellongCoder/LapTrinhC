#include <stdio.h>
#include <stdlib.h>
//Bài tập 6: Tạo hàm đệ qui để tính giai thừa
//Viết chương trình C để tạo một hàm tự định nghĩa có sử dụng phương pháp đệ qui để tính giai thừa của một số.
int GiaiThua (int n) {
    if (n==0) {
        return 1;
    }
    else {
        return n*GiaiThua(n-1);
    }
}
int main()
{
    int n;
    printf("nhap mot so: ");
    scanf("%d",&n);
    printf("giai thua cua %d la: %d",n,GiaiThua(n));
    return 0;
}
