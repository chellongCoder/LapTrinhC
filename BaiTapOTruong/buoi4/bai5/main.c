#include <stdio.h>
#include <stdlib.h>
//Bài tập 5: In bảng nhân của một số bất kỳ
//Viết chương trình C để nhập một số và sau đó in bảng nhân của số đó, có dạng như sau:
//11 x 1 = 11
//11 x 2 = 22
//11 x 3 = 33
//...
//Đây là bài tập C cơ bản giúp bạn làm quen với cách sử dụng vòng lặp FOR trong C
int main()
{
    int i,x;
    printf("nhap mot so bat ki: ");
    scanf("%d",&x);
    for (i=1; i<=9; i++) {
        printf("%d x %d = %d\n",x,i,x*i);
    }
    return 0;
}
