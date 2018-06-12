#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n;
    printf("nhap vao n phan tu: ");
    scanf("%d", &n);
    int a[n];
    int i;
    for (i=0; i<n; i++) {
        a[i]=rand()%10;
        //printf("%d",a[i]);

    }
    for (i=0; i<n; i++) {
        printf("a[%d]=%d\t",i,a[i]);
    }
    int max=a[0],min=a[0];
    for (i=0; i<n; i++) {
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];
    }
    printf("\nmax=%d\tmin=%d",max,min);
    return 0;
}
