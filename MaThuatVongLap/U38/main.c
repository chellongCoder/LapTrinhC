#include <stdio.h>
#include <stdlib.h>
//viết chương trình in ra chuỗi fibonaci đến sô nguyên N nào đó.
int main()
{
    int n;
    printf("input the variable of n: ");
    scanf("%d",&n);
    int a=0; //chuỗi fibonalci đc tạo ra bởi 2 số 0 và 1
    int b=1;
    int temp; // khởi tạo 1 biến tạm
    while (a<=n) { // chạy đến cái số vừa nhập vào đấy
        printf("%4d",a);
        temp=a; // phải dùng biến tạm nếu in trực tiếp dãy số sẽ không có sô 0 và 1 ở đầu
        a=b;
        b=temp+a;
    }
    return 0;
}
