#include <stdio.h>
#include <stdlib.h>
/*
Bài 6 (1 điểm). Chàng trai và cô gái cùng nhau chơi một trò chơi.
 Khi đến lượt chơi của chàng trai: chàng trai nắm tay cô gái 1 cái, hôn cô gái 1 cái.
 Khi đến lượt chơi của cô gái: cô gái tán chàng trai 1 cái.
Hai người luân phiên đổi lượt chơi cho nhau.
Giả sử lượt chơi đầu tiên là thuộc về chàng trai, như vậy ta có thể liệt kê một số bước như sau:
Bước
Hành động
1 Nắm tay 2 Hôn 3 Tán 4 Nắm tay 5 Hôn 6 Tán 7 Nắm tay
…
…
Nhập vào n. Hãy cho biết bước n thì hành động tương ứng là gì ?
*/
int main()
{
    int n;
    printf("input number of action: ");
    scanf("%d",&n);
    int a=1;
    int b=2;
    int c=3;
    while (c<=n || a<=n || b<=n) {
        printf("nam tay\n %d",a);
        a=a+3;
        printf("hon\n %d",b);
        b=b+3;
        printf("tan\n %d",c);
        c=c+3;
    }
    return 0;
}
