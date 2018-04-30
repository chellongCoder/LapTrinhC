#include <stdio.h>
#include <stdlib.h>
//Bài tập 4: Tìm số nguyên tố
//Viết chương trình C để tìm các số nguyên tố trong một dãy cho trước.
//Đây là bài tập C đơn giản minh họa cách sử dụng kết hợp vòng lặp FOR và lệnh IF ELSE trong C.
int main()
{
    int first, end;
    printf("nhap vao so bat dau cua day: ");
    scanf("%d",&first);
    printf("nhap vao so ket thuc cua day: ");
    scanf("%d",&end);
    int i,j,count;
    printf("\ncac so nguyen to trong day tu %d den %d la: \n",first, end);
    for (i=first; i<=end; i++) {
        count=0;
        for (j=1; j<=i; j++) {
            if (i%j==0) {
                count++;
            }
        }
        if (count==2) {
            printf("%-4d",i);
        }
    }
    return 0;
}
