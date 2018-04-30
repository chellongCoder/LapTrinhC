#include <stdio.h>
#include <stdlib.h>
//Bài tập 15: Xóa phần tử trong mảng đã qua sắp xếp
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
    int ViTriXoa;
    printf("\nnhap vao vi tri xoa: ");
    scanf("%d",&ViTriXoa);
    for (i=ViTriXoa; i<n; i++) {
        a[i]=a[i+1];
    }
    printf("\nmang sau khi xoa:\n");
    for (i=0; i<n-1; i++) {
        printf("%4d",a[i]);
    }
    return 0;
}
