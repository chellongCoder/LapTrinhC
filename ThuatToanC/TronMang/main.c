#include <stdio.h>
#include <stdlib.h>
void nhapMang (int a[], int n) {
    int i;
    for (i = 0; i < n ; i ++) {
        printf("nhap vao a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n) {
    int i;
    for(i = 0; i<n; i++) {
        printf("%d\t",a[i]);
    }
}

void tronMangTangDan (int a[], int b[], int c[], int n, int m) {
    int k;
    int i=0, j=0;
    for (k=0; k<m+n; k++) {
        if (i>=n) {
            c[k] = b[j++];
        } else if (j>=m) {
            c[k] = a[i++];
        } else {
            if (a[i] < b [j]) {
                c[k] = a[i++];
            } else {
                c[k] = b[j++];
            }
        }
    }
}
int main()
{
    int n,m;
    printf("nhap vao so n: ");
    scanf("%d", &n);
    printf("nhap vao so m: ");
    scanf("%d", &m);
    int a[n];
    int b[m];
    int c[m+n];
    printf("nhap mang a: \n");
    nhapMang(a,n);
    printf("nhap mang b: \n");
    nhapMang(b,m);
    tronMangTangDan(a,b,c,n,m);
    xuatMang(c,(m+n));
    return 0;
}
