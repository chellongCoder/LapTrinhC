#include <stdio.h>
#include <stdlib.h>
//Bài tập 4: Sao chép mảng
//Viết chương trình C để sao chép các phần tử của mảng này sang mảng khác
int main()
{
    int n;
    printf("input size array: ");
    scanf("%d",&n);
    printf("\nnhap %d so phan tu vao mang:\n",n);
    int a[n];
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\ncac phan tu trong mang ban dau la: ");
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
    int b[n];
    for (i=0; i<n; i++) {
        b[i]=a[i];
    }
    printf("\ncac phan tu cua mang sao la:  ");
    for (i=0; i<n; i++) {
        printf("%4d",b[i]);
    }
    return 0;
}
