#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int menu () {
    printf("============menu lenh: ========\n");
    printf("======1. nhap 2 mt\n");
    printf("======2. xuat 2 mt \n");
    printf("======3. tinh tich 2 mt\n");
    int chon;
    printf("moi ban chon lenh: ");
    scanf("%d",&chon);
    return chon;
}
int main()
{
    int chon;
    char key;
    int **a;
    int n,p;
    printf("nhap vao so hang cua ma tran 1: ");
    scanf("%d", &n);
    printf("nhap vao so cot cua ma tran 1: ");
    scanf("%d", &p);
    a=(int**)malloc(n*sizeof(int**));// cấp phát n con trỏ
    int i;
    for (i=0; i<n; i++) {
        a[i]=(int*)malloc(p*sizeof(int*)); //mỗi con trỏ đc cấp phát 11 size p
    }
    int **b;
    int m;
    printf("so hang cua ma tran 2 la: %d\n",p);
    printf("nhap vao so cot cua ma tran 2: ");
    scanf("%d",&m);
    b=(int**)malloc(p*sizeof(int**));
    for (i=0; i<p; i++) {
        b[i]=(int*)malloc(m*sizeof(int*));
    }
    int **c;
    c=(int**)malloc(n*sizeof(int**));
    for (i=0; i<n; i++) {
        c[i]=(int*)malloc(m*sizeof(int*));
    }
    do {
        chon = menu();
        switch (chon) {
            case 1: {
                printf("nhap mang a: \n");
                nhapmang1(a,n,p);
                printf("nhap mang b: \n");
                nhapmang1(b,p,m);
            }break;
            case 2: {
                printf("xuat mang a: \n");
                xuatmang1(a,n,p);
                printf("xuat mang b: \n");
                xuatmang1(b,p,m);
            }break;
            case 3: {
                Nhan2Matran(c,n,m,p,a,b);
                printf("tich 2 mt : \n");
                xuatmang3(c,n,m);
            }break;
            default: {
                printf("\nban nhap sai, moi nhap lai lenh!");
            }break;
        }
    printf("\nban co muon nhap tiep lenh khong? (an c de tiep tuc)! ");
    scanf("%c",&key);
    key = getchar();
    }while (key=='c');
    free(a);
    for (
         i=0; i<n; i++) {
        free(a[i]);
    }
        free(b);
    for (i=0; i<p; i++) {
        free(b[i]);
    }
        free(c);
    for (i=0; i<n; i++) {
        free(c[i]);
    }
    return 0;
}

void nhapmang1 (int **a, int n, int p) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<p; j++) {
            printf("a[%d][%d]= ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}
void xuatmang1 (int **a, int n, int p) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<p; j++) {
            printf("%4d", a[i][j]);
        }
    printf("\n");
    }
}
void nhapmang2 (int **b, int p, int m) {
    int i,j;
    for (i=0; i<p; i++) {
        for (j=0; j<m; j++) {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
}
void xuatmang2 (int **b, int p, int m) {
    int i,j;
    for (i=0; i<p; i++) {
        for (j=0; j<m; j++) {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
}
void Nhan2Matran (int **c, int n, int m, int p, int **a, int **b) {
    int i,j,k,tam;

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            c[i][j]=0;
            for (k=0; k<p; k++) {
                tam= a[i][k] * b[k][j];
                c[i][j]+=tam;
            }
        }
    }
}
void xuatmang3 (int **c, int n, int m) {
    int i,j,s;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%4d ",c[i][j]);
        }
        printf("\n");
    }
}
