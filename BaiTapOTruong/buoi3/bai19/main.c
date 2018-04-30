#include <stdio.h>
#include <stdlib.h>
//Bài tập 19: Nhập số và hiển thị số bằng chữ tương ứng
//Yêu cầu bài tập C này là nhập một số bất kỳ và hiển thị số bằng chữ tương ứng, ví dụ: 0 là số không, 1 là số một, ....
int main()
{
    int so;
    printf("nhap mot so bat ki (tu 0 den 9): ");
    scanf("%d",&thu);
    switch (thu) {
        case 0: printf("so khong.");break;
        case 1: printf("so mot."); break;
        case 2: printf("so hai."); break;
        case 3: printf("so ba."); break;
        case 4: printf("so bon."); break;
        case 5: printf("so nam."); break;
        case 6: printf("so sau.");break;
        case 7: printf("so bay."); break;
        case 8: printf("so tam."); break;
        case 9: printf("so chin.");break;
    }
    return 0;
}
