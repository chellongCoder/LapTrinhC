#include <stdio.h>
#include <stdlib.h>
//viết chương trình dùng các hàm để nhập 1 dãy số và day đó in dãy số ra ngoài màn hình, in ra mh GTLN , GTNN
//sắp xếp dãy số theo chiều tăng dần
void nhapMang(int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]:> ",i);
        scanf("%d", &a[i]);
    }
}

void inMang(int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%d\t",a[i]);
    }
}

void maxMin(int a[], int n) {
    int max = a[0];
    int min = a[0];
    int i;
    for (i=0; i<n; i++) {
        if(a[i]>max) {
            max = a[i];
        }
        if(a[i]<min) {
            min = a[i];
        }
    }
    printf("\nmax: %d", max);
    printf("\nmin: %d",min);
}

void sapXepTangDan(int a[], int n) {
    int i,j;
    for(i=0; i<n; i++) { //thuat toan sap xep noi bot
        for(j=n-1; j>i; j--) {
            if(a[j]<a[j-1]) {
                int temp = a[j];
                a[j]= a[j-1];
                a[j-1] = temp;
            }
        }
    }
    printf("\nda sap xep tang dan!");
}
int main()
{
   int n;
   printf("nhap n:> ");
   scanf("%d", &n);
   int a[n];
   nhapMang(a,n);
   printf("\nin mang:> ");
   inMang(a,n);
   maxMin(a,n);
   sapXepTangDan(a,n);
    return 0;
}
