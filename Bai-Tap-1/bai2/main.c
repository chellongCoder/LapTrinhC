#include <stdio.h>
#include <stdlib.h>
//Bài 2: Nhập vào số nguyên n, kiểm tra số đó chẵn hay lẻ, âm hay dương và in kết quả kiểm tra ra màn hình
int ChanLe (int n) {
    if (n%2==0) {
        return 0;
    }
    if (n%2!=0) {
        return 1;
    }
}
int AmDuong (int n) {
    if (n<0) {
        return 0;
    }
    else {
        return 1;
    }
}
int main()
{
    int n;
    printf("input integer n: ");
    scanf("%d",&n);
    if (ChanLe(n)==0) {
        printf("\n%d la so chan\t",n);
    }
    if (ChanLe(n)==1) {
        printf("\n%d la so le\t",n);
    }
    if (AmDuong(n)==0) {
        printf("%d la so am\n",n);
    }
    if (AmDuong(n)==1) {
        printf("%d la so duong\n",n);
    }
    return 0;
}
