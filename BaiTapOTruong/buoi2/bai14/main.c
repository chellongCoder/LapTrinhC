#include <stdio.h>
#include <stdlib.h>
//Bài tập 14: Chèn phần tử vào mảng đã qua sắp xếp
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
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (a[i]==a[i+1]+1) {

            }
        }
    }
    return 0;
}
