#include <stdio.h>
#include <stdlib.h>
//Bài tập 18: Nhập một số và hiển thị ngày trong tuần tương ứng
//Yêu cầu bài tập C này là nhập một số bất kỳ và sau đó hiển thị thông báo về ngày trong tuần tương ứng theo tiêu chí: số 1 là Thứ hai, số 2 là thứ 3, ...
int main()
{
    int thu;
    printf("nhap mot so bat ki (tu 1 den 7): ");
    scanf("%d",&thu);
    switch (thu) {
        case 1: printf("thu hai."); break;
        case 2: printf("thu ba."); break;
        case 3: printf("thu tu."); break;
        case 4: printf("thu nam."); break;
        case 5: printf("thu sau."); break;
        case 6: printf("thu bay.");break;
        case 7: printf("chu nhat."); break;
    }
    return 0;
}
