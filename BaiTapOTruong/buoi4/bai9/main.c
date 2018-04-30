#include <stdio.h>
#include <stdlib.h>
//Bài tập 9: Tìm giai thừa
//Viết chương trình C để nhập một số và tìm giai thừa của số đó.
int main()
{
    int n;
    printf("nhap mot so bat ki: ");
    scanf("%d",  &n);
    int i;
    int sum=1;
    for (i=1; i<=n; i++) {
        sum=sum*i;
    }
    printf("giai thua cua so %d la %d.",n,sum);
    return 0;
}
