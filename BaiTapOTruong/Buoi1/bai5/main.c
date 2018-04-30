#include <stdio.h>
#include <stdlib.h>
//Bài tập 5: Nhập một số từ bàn phím và in bảng nhân
int main()
{
    //cách 1 không dùng vòng lặp
    int x;
    printf("enter value of x: ");
    scanf("%d",&x);
    printf("%d x %d = %d",x,0,(x*0));
    printf("\n%d x %d = %d",x,1,(x*1));
    printf("\n%d x %d = %d",x,2,(x*2));
    printf("\n%d x %d = %d",x,3,(x*3));
    printf("\n%d x %d = %d",x,4,(x*4));
    printf("\n%d x %d = %d",x,5,(x*5));
    printf("\n%d x %d = %d",x,6,(x*6));
    printf("\n%d x %d = %d",x,7,(x*7));
    printf("\n%d x %d = %d",x,8,(x*8));
    printf("\n%d x %d = %d",x,9,(x*9));
    printf("\n%d x %d = %d\n",x,10,(x*10));
    //cách 2 có dùng vòng lặp
    int i;
    for (i=0; i<=10; i++) {
        printf("\n%d * %d = %d",x,i,(x*i));
    }
    return 0;
}
