#include <stdio.h>
#include <stdlib.h>
//viết 1 chương trình nhập vào 1 so nguyên n và in tất cả các số từ n đến -32. bắt nhập lại nếu người dùng nhập -1
int main()
{
    int n;
    int i;
    do{
        printf("input the variable of integer: ");
        scanf("%d",&n); //nhập số n
    }while(n==-1); // nếu nó =-1 thì nhập lại nhé
    if (n>-32) { //xét th1 n>-32 thì in ngược về -32
        for (i=n; i>=-32; i--) {
            printf("%4d",i); //%4d chỉ là tạo khoảng cách cho số thôi :3
        }
    }
    else { //xét th1 n<=32 thì in đến -32
        for (i=n; i<=-32; i++) {
            printf("%4d",i);
        }
    }
    return 0;
}
