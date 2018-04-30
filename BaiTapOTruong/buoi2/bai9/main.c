#include <stdio.h>
#include <stdlib.h>
//Bài tập 9: Tìm phần tử lớn nhất, nhỏ nhất trong mảng
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    printf("\nnhap %d phan tu vao mang: \n",n);
    int a[n];
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for (i=0; i<n; i++) {
        if (a[i]>max) {
            max=a[i];
        }
        if (a[i]<min) {
            min=a[i];
        }
    }
    printf("\nphan tu lon nhat trong mang la: %d",max);
    printf("\nphan tu nho nhat trong mang la: %d",min);
    return 0;
}
