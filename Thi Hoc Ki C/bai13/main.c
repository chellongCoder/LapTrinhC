#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int n;
        printf("nhap vao so n: ");
        scanf("%d", &n);
    int a[50];
        printf("so %d chuyen sang he 2 la: ",n);
        ChuyenHe2(a,n);
        printf("\n");
        printf("so %d chuyen sang he 8 la: ",n);
        ChuyenHe8(a,n);
        printf("\n");
        printf("so %d chuyen sang he 16 la: ", n);
        ChuyenHe16(a,n);
    return 0;
}
void ChuyenHe2 (int a[], int n) {
    int i=0;
    while (n>=1) {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for (i=i-1; i>=0; i--) {
        printf("%d", a[i]);
    }
}

void ChuyenHe8 (int a[], int n) {
    int i=0;
    while (n>0) {
        a[i]=n%8;
        n=n/8;
        i++;
    }
    for (i=i-1; i>=0; i--) {
        printf("%d", a[i]);
    }
}
void ChuyenHe16 (int a[], int n) {
    int i=0;
    if (n<10) {
        printf("%d doi sang he 16 la %d", n,n);
    }
    while (n>0) {
        a[i]=n%16;
        n=n/16;
        i++;
    }
    for (i=i-1; i>=0; i--) {
        if (a[i]<10) {
        printf("%d",a[i]);
        }
        else {
            break;
        }
    }
    if (a[0]==10) {printf("A");}
    if (a[0]==11) {printf("B");}
    if (a[0]==12) {printf("C");}
    if (a[0]==13) {printf("D");}
    if (a[0]==14) {printf("E");}
    if (a[0]==15) {printf("F");}
}
