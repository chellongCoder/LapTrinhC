#include <stdio.h>
#include <stdlib.h>
/*
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
6 12 18 24 30 36
*/
int main()
{
    int n;
    printf("input the variable of height: "); //nhập vào chiều cao của tam giác số
    scanf("%d",&n);
    int i,j;
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) { //để ý quy luật: các số liền sau gấp số đầu tiên 1,2,3,4... lần. Và kết thúc 1 dòng là 1 số = [số đầu*số đầu]
            printf("%d ",j*i); //nhận cột với lần lượt hàng rồi in ra
        }
        printf("\n");
    }
    return 0;
}
