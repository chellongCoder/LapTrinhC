#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 1 mảng và đảo ngược mảng đó vd: 1 2 3 4 5 -> 5 4 3 2 1
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
void reverseArray (int a[], int n) {
    int i=0;
    int j=n-1;
    int temp;
    while (i<j) {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
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
    printf("\narray was reversed: ");
    reverseArray(a,n);
    XuatMang(a,n);
    return 0;
}
