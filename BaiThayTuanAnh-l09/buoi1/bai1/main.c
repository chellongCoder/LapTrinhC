#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Bài toán: Cho dãy ô m gồm n ô, mỗi ô chứa một số nguyên dương. Yêu cầu tính tổng các số nguyên tố có trong dãy ô m đã cho
//Cách giải:
//Viết chương trình kiểm tra tính nguyên tố
//Duyệt qua các ô và tính tổng

int main()
{
    srand(time(NULL));
    int n;
    printf("nhap vao so phan tu so duong: ");
    scanf("%d",&n);
    int a[n];
    int i;
    for (i=0; i<n; i++) {
        a[i] = rand()%100;
    }
    printf("\ntao ngau nhien %d phan tu duong: \n",n);
    for (i=0; i<n; i++) {
        printf("%-4d",a[i]);
    }
    int j;
    printf("\ncac so nguyen to co trong mang la: \n");
    for (i=0; i<n; i++) {
        int dem=0;
        for (j=1; j<=a[i]; j++) {
            if (a[i]%j==0) {
                dem++;
            }
        }
        if (dem==2) {
            printf("%-4d",a[i]);
        }
    }
    return 0;
}
