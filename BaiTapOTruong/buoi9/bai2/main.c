#include <stdio.h>
#include <stdlib.h>
//Bài tập 2: In mảng theo chiều đảo ngược
//Viết chương trình C để nhập các phần tử mảng, sau đó in các phần tử mảng theo chiều đảo ngược.
void NhapMang (int *a, int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d] = ",i);
        scanf("%d",(a+i));
    }
}
void XuatMang (int *a, int n) {
    int i;
    for (i=n-1; i>=0; i--) {
        printf("%-4d",*(a+i));
    }
}
int main()
{
    srand(time(NULL));
    int *a;
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("===============nhap mang============\n");
    NhapMang(a,n);
    printf("===========in mang=================\n");
    XuatMang(a,n);
    free(a);
    return 0;
}
