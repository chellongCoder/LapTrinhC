#include <stdio.h>
#include <stdlib.h>
//kích thước ccuar mảng
int main()
{
    int a[3][4];
    printf("KT cua a = %d\n",sizeof(a));
    printf("KT cua a[0] = %d\n",sizeof(a[0]));
    printf("Kt cua a[0][0] = %d\n", sizeof(a[0][0]));
    return 0;
}
