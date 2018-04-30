#include <stdio.h>
#include <stdlib.h>
//Bài tập 8: Vẽ tam giác sao
//Viết chương trình C để nhập một số làm số hàng (hay độ rộng theo chiều ngang) của tam giác rồi sau đó vẽ tam giác sao với độ rộng đó.
//Ví dụ nếu bạn nhập số hàng là 5 thì vẽ tam giác sao có dạng:
//*
//**
//***
//****
//*****
int main()
{
    int i,j,n;
    printf("nhap so hang: ");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
