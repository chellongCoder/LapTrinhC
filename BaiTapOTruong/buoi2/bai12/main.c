#include <stdio.h>
#include <stdlib.h>
//Bài tập 12: Sắp xếp mảng theo thứ tự giảm dần
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    printf("nhap %d phan tu vao mang: \n",n);
    int a[n];
    int i,j,temp;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("mang sau khi sap xep al: \n");
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (a[j]>a[i]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%4d",a[i]);
    }
    return 0;
}
