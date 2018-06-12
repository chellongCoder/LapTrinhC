#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a[100];
    int i;
    printf("nhap vao phan tu cua mang\n");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("xuat ra phan tu cua mang  ");
    for (i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    int sum=0;
    for (i=0; i<n; i++) {
        sum=sum+a[i];
    }
    printf("\ntong=%d \n",sum);
    int max, min;
    max=a[0];
    min=a[0];
    for (i=0; i<n; i++) {
        if (a[i]>max) {
            max=a[i];
        }
        if (a[i]<min) {
            min=a[i];
        }
    }
        printf("gia tri lon nhat la %d\n",max);
        printf("gia tri nho nhat la %d\n",min);
        printf("cac so chan la ");
    for (i=0; i<n; i++) {
        if (a[i]%2==0) {
            printf("%d ",a[i]);
        }
    }
        printf("\n");
        printf("day cac so le la ");
    for (i=0; i<n; i++) {
        if (a[i]%2!=0) {
            printf("%d ",a[i]);
        }
    }
    int j,minsx;
    int tam;
        printf("\n cac phan tu sau khi sx chon la\n");
    for (i=0; i<n; i++) {
        minsx=a[i];
        for (j=i+1; j<n; j++) {
            if (a[j]<minsx) {
                minsx=a[j];
            }
            if (minsx!=a[i]) {
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
        printf("%d ",a[i]);
    }
    int temp;
    printf("\ncac phan tu sau khi sx noi bot la\n");
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (a[j]>a[i]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    }






    return 0;
}
