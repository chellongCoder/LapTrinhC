#include <stdio.h>
#include <stdlib.h>
//Câu 5:  Tính giá trị n giai thừa (n!), với n nhập vào từ bàn phím. In kết quả ra màn hình.
int main()
{
    int n;
    printf("nhap vao so n: ");
    scanf("%d",&n);
    int i;
    int s=1;
    for (i=1; i<=n; i++) {
        s=s*i;
    }
    printf("giai thua cua so %d la %d",n,s);
    return 0;
}
