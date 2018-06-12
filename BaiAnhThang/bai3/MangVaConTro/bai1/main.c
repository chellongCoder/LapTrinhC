#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*
    srand(time(NULL));
    int n;
    printf("nhao vao n: \n");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=a;
    int i;
    for (i=0; i<n; i++) {
       *(p+i) = rand()%10;
        printf("%02d\t",*(p+i));
    }
    printf("\n");
    printf("ket thuc chuong trinh!\n");
    */
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%4d %4d",a,b);
    return 0;
}
