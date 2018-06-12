#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Câu 8: Nhập vào một dãy n số bất kỳ từ bàn phím.
    //Tìm giá trị lớn nhất và nhỏ nhất của dãy số đó. In kết quả tìm được ra màn hình cùng vị trí của các giá trị max, min trong dãy số.
    int n;
    printf("nhap vao n phan tu: ");
    scanf("%d", &n);
    int *a;
    a=(int*)malloc(n*sizeof(int*));
    nhapmang(a,n);
    xuatmang(a,n);
    TimMaxMin(a,n);
    free(a);
    return 0;
}
 void nhapmang (int *a, int n) {
    int i;
     for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d", &a[i]);
     }
 }
 void xuatmang (int *a, int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
 }
 void TimMaxMin (int *a, int n) {
    int i,temp1, temp2;
    int max=a[0];
    int min=a[0];
    for (i=0; i<n; i++) {
        if (a[i]>max) {
            max=a[i];
            temp1=i;
        }
        if (a[i]<min) {
            min=a[i];
            temp2=i;
        }
    }
    int dem1=0, dem2=0;
    for (i=0; i<n; i++) {
        if (a[i]==max){
            dem1++;
        }
        if (a[i]==min) {
            dem2++;
        }
    }

    printf("\nco %d gia tri max o vi tri a[%d] la %d\n",dem1,temp1,max);
    printf("co %d gia tri min o vi tri a[%d] la %d\n",dem2, temp2,min);
    //printf("\n%d %d", max, min);
 }
