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
void Merge (int a[], int L, int M, int R) {
    int i = L, j = M+1;
    int n = R + 1;
    int c[n];
    int k;
    for (k=0; k<n; k++) {
        if (i>M) {
            c[k] = a[j++];
        } else if (j>R) {
            c[k] = a[i++];
        } else {
            if(a[i]<a[j]) {
                c[k] = a[i++];
            } else {
                c[k] = a[j++];
            }
        }
    }
    i = L; //vị trí đầu tiên của a
    for (i=0; i<n; i++) {
        a[L] = c[i];
        L++;
    }
}

void MergeSort(int a[], int L, int R) {
    int M;
    if (L<R) {
        M = (L+R)/2;
        MergeSort(a,L,M);
        MergeSort(a,M+1,R);
        Merge(a,L,M,R);
    }
}
int main()
{
    int n;
    printf("nhap vap so n: ");
    scanf("%d", &n);
    int a[n];
    nhapMang(a,n);
    //xuatMang(a,n);
    MergeSort(a,0,(n-1));
    xuatMang(a,n);
    return 0;
}
