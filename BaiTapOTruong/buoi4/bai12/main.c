#include <stdio.h>
#include <stdlib.h>
//Bài tập 12: Kiểm tra số hoàn hảo
//Yêu cầu bài tập C này là nhập một số từ bàn phím, kiểm tra xem số đó có phải là số hoàn hảo hay không và đưa ra thông báo tương ứng.
//Số hoàn hảo là số có tổng các ước số dương (ngoại trừ chính số đó) bằng chính số đó.
int main()
{
    int x;
    printf("nhap 1 so bat ki: ");
    scanf("%d",&x);
    int i,sum=0;
    printf("cac uoc so duong cua so da cho la: ");
    for (i=1; i<x; i++) {
        if (x%i==0) {
            sum=sum+i;
            printf("%-4d",i);
        }
    }
    if (sum==x) {
        printf("\ntong cua cac uoc so la: %d",sum);
        printf("\nso da cho la so hoan hao.");
    }
    else {
        printf("\ntong cua cac uoc so la: %d",sum);
        printf("\nso da cho khong la so hoan hao.");
    }
    return 0;
}
