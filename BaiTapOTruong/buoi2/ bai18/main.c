#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
//xóa phần tử giống nhau trong mảng
int main ()
{
    srand(time(NULL));
    int *a;
    int n;
    printf("nhap vao so phan tu: ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("============nhap mang===============\n");
    int i,j,k,dem,tam;
    for (i=0; i<n; i++) {
        printf("phan tu - %d: ",i);
        scanf("%d",(a+i));
    }
    printf("-==========xuat mang=============\n");
    for (i=0; i<n; i++) {
        printf("%4d",*(a+i));
    }
    for (i=0; i<n; i++) { //duyệt hết mảng
        for (j=i+1; j<n; j++) { //duyệt từ phần tử cần xét đến hết
            if (*(a+j) == *(a+i)) { //nếu phát hiện bằng nhau
                for (k=j; k<n; k++) { //xóa
                    a[k]  = a[k+1];
                }
                n--;//truừ đi phần tử vừa xóa
            }
            else if (*(a+i-1) == *(a+i)) { //nếu phát hiện phần tử đằng trước giống phần tử đằng sau
                for (k=i; k<n; k++) {// xóa
                    a[k] = a[k+1];
                }
                n--;
            }
        }
        (int*)realloc(a,n*sizeof(int)); //cấp phát lại mảng
    }
    printf("\n=======mang moi===========\n"); //xuất mảng mới
    for (i=0; i<n; i++) {
        printf("%4d",*(a+i));
    }
    return 0;
}
