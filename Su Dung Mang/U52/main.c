#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//khởi tạo 2 mảng só thực có cùng kích thước, so sánh 2 giá trị trung bình của 2 mảng và in ra giá trị của mảng lớn hơn cùng tên của nó
void NhapMang (float x[], int n) {
    int i;
    for (i=0; i<n; i++) {
        x[i]=100.100*rand()/RAND_MAX; //random số thực
    }
}
void XuatMang (float x[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%8.2f",x[i]);
    }
}
float AVERAGE (float x[], int n) {
    int i;
    float sum=0;
    for (i=0; i<n; i++) {
        sum=sum+x[i];
    }
    sum=sum/n;
    return sum;
}
int main()
{
    srand(time(NULL));
    int n;
    printf("input the size of array: ");
    scanf("%d",&n);
    float a[n];
    printf("input array a: \n");
    NhapMang(a,n);
    XuatMang(a,n);
    float b[n];
    printf("\ninput array b: \n");
    NhapMang(b,n);
    XuatMang(b,n);
    if (AVERAGE(a,n)>AVERAGE(b,n)) {
        printf("\nAVGa: %0.2f\nAVGb: %0.2f\n-> a",AVERAGE(a,n),AVERAGE(b,n));
    }
    else {
        printf("\nAVGa: %0.2f\nAVGb: %0.2f\n-> b",AVERAGE(a,n),AVERAGE(b,n));
    }
    return 0;
}
