#include <stdio.h>
#include <stdlib.h>
//viết chương trình nhập vào 1 dãy số sau đó in ra màn hình các số âm trên 1 dòng và các số dương trên 1 dòng
void inDaySo(int a[], int n) {
    int i;
    printf("so duong:> ");
    for(i=0; i<n; i++) {
        if(a[i]>0) {
            printf("%d\t", a[i]);
        }
    }
    printf("\nso am:> ");
    for(i=0; i<n; i++) {
        if(a[i]<0) {
            printf("%d\t", a[i]);
        }
    }
}
int main()
{
    int n;
    printf("nhap n:> ");
    scanf("%d", &n);
    int a[n];
    printf("nhapMang:>\n");
    int i;
    for(i=0; i<n; i++) {
        printf("nhap a[%d]> ", i);
        scanf("%d", &a[i]);
    }
    inDaySo(a,n);
    return 0;
}
