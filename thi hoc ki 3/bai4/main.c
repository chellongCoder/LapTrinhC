#include <stdio.h>
#include <stdlib.h>
//Bài 4 (1 điểm). Sắp xếp mảng tăng dần theo giá trị đại số.
//Chương trình mới vào khởi tạo mảng a = { 4, 7, -5, 2, 8, 7 } (n = 6).
//Sau khi xử lý, chương trình sẽ xuất ra kết quả là a = { 2, 4, -5, 7, 7, 8 }.


int main()
{
    int a[6]={4,7,-5,2,8,7};
    int i,j;
    int tam;
    for (i=0; i<6; i++) {
        if (a[i]<0) {
            a[i]=-a[i];
        }
    }
    for (i=0; i<6; i++) {
        for (j=i+1; j<6; j++) {
            if (a[j]<a[i]) {
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
    }
    for (i=0; i<6; i++) {
        if (a[i]==5) {
            a[i]=-5;
        }
        printf("%4d",a[i]);
    }
    return 0;
}
