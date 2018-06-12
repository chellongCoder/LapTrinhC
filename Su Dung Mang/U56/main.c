#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 1 mảng và tìm phần tử lớn nhất và bé nhất trong mảng
void NhapMang(int a[], int n){
    int i;
    for (i=0; i<n; i++) {
        a[i]=rand()%100;
    }
}
void XuatMang(int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
}
int MaxArray (int a[], int n) {
    int max=a[0];
    int i;
    for (i=0; i<n; i++) {
        if (a[i]>max) {
            max=a[i];
        }
    }
    return max;
}
int MinArray (int a[], int n) {
    int min=a[0];
    int i;
    for (i=0; i<n; i++) {
        if (a[i]<min) {
            min=a[i];
        }
    }
    return min;
}
int main()
{
    srand(time(NULL));
    int n;
    printf("\nenter the size of arr: ");
    scanf("%d",&n);
    int a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    printf("\nlargest element in array is: %d",MaxArray(a,n));
    printf("\nsmallest element in array is: %d",MinArray(a,n));
    return 0;
}
