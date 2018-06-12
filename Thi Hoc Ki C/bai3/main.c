#include <stdio.h>
#include <stdlib.h>
//Câu 3 :  Nhập vào một dãy n số bất kỳ từ bàn phím. Sau đó sắp xếp dãy số theo chiều tăng dần.
// In ra màn hình dãy số ban đầu và dãy số đã sắp xếp.
//n=10, a[0]=1, a[1]=2...a[10]=..
/*
int main()
{
    int n;
    printf("nhap vao n phan tu: ");
    scanf("%d",&n);
    int a[n];
    printf("nhap vao mang a: \n");
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("xuat mang a: ");
    for (i=0; i<n; i++) {
        printf("%3d", a[i]);
    }
    int j,tam;
    //sắp xếp nổi bọt
    for (i=0; i<n-1; i++) {
        for (j=i+1; j<n; j++) {
            if (a[j]<a[i]) {
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
    }
    printf("\nmang sau khi sap xep la: ");
    for (i=0; i<n; i++) {
        printf("%3d",a[i]);
    }
    return 0;
}
*/
//mảng: 1 dãy ô nhớ liền nhau, khi bạn khai báo mảng, ví dụ a[100], a[n];
//con trỏ: giống như 1 mảng 1 chiều: chúng ta cần phải cấp phát (cấp phát động) ví dụ: int *p = (int*)malloc(n*sizeof(int))
//realloc(p, (n+1)*sizeof(int));
//free(p); hiểu là công việc đã xong, máy tính có thể sử dụng n ô nhớ vào 1 tác vụ khác;
int main ()
{
    int n;
    printf("nhap vao n phan tu ");
    scanf("%d",&n);
    int *a;
    a=(int*)malloc(n*sizeof(int)); //giống như a[n]
    printf("nhap vao mang a: \n");
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",(a+i));
    }
    printf("\nxuat mang a: \n");
    for (i=0; i<n; i++) {
        printf("%3d",*(a+i));
    }
    int j,tam,minsv;
    //sắp xếp chọn
    printf("\n");
    for (i=0; i<n; i++) {
        minsv=i;
        for (j=i+1; j<n; j++) {
            if (a[j]<a[minsv]) {
                minsv=j;
                if (minsv!=i) {
                tam=a[i];
                a[i]=a[minsv];
                a[minsv]=tam;
                }
            }
        }

      printf("%3d",a[i]);
    }

    free(a);
    return 0;
}
