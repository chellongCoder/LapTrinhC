#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Câu 9:  Viết chương trình nhập vào ma trận thực Anxm .
    // Sau đó tìm giá trị lớn nhất, giá trị nhỏ nhất của ma trận này. In ma trận cùng kết quả tìm được ra màn hình.

    int **a;
    int m,n,i;
        printf("nhap vao so hang: ");
        scanf("%d", &m);
        printf("nhap vao so cot: ");
        scanf("%d", &n);
        a=(int**)malloc(m*sizeof(int**));
    for (i=0; i<m; i++) {
            a[i]=(int*)malloc(n*sizeof(int*));
        }
        printf("========nhap mang========\n");
        nhapmang(a,m,n);
        printf("========xuat mang========\n");
        xuatmang(a,m,n);
        TimMaxMin(a,m,n);
    for (i=0; i<m; i++) {
        free(a[i]);
    }
        free(a);
    return 0;
}
void nhapmang (int **a, int m, int n) {
    int i,j;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("a[%d][%d]= ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}
void xuatmang (int **a, int m, int n) {
    int i,j;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}
void TimMaxMin (int **a, int m, int n) {
    int i1,j1,i2,j2;
    int max=a[0][0];
    int min=a[0][0];
    int i,j;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (a[i][j]>max) {
                max=a[i][j];
                i1=i;
                j1=j;
            }
            if (a[i][j]<min) {
                min=a[i][j];
                i2=i;
                j2=j;
            }
        }
    }
    int dem1=0,dem2=0;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (a[i][j]==max) {
                dem1++;
            }
            if (a[i][j]==min) {
                dem2++;
            }
        }
    }
    printf("\nco %d gia tri max o vi tri a[%d][%d] la %d\n",dem1,i1,j1,max);
    printf("co %d gia tri min o vi tri a[%d][%d] la %d",dem2,i2,j2,min);
}

