#include <stdio.h>
#include <stdlib.h>
//tạo menu
int menu () {
    printf("============menu lenh: ========\n");
    printf("======1. ve tam giac vuong day duoi.\n");
    printf("======2. ve tam giac vuong day tren. \n");
    printf("======3. ve hinh chu nhat rong.\n");
    int chon;
    printf("moi ban chon lenh: ");
    scanf("%d",&chon);
    return chon;
}
void TamGiacTren () {
    int n;
    printf("nhap vao chieu cao tam giac: ");
    scanf("%d",&n);
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n-i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void TamGiacDuoi ()
{
    int n;
    printf("nhap vao chieu cao tam giac: ");
    scanf("%d",&n);
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void VeHinhCNRong () {
    int n,m,i,j;
    printf("nhap vao chieu dai: ");
    scanf("%d",&n);
    printf("nhap vao chieu rong: ");
    scanf("%d",&m);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            if (i==0 || i==n-1) {
                printf("*");
            }
            else {
                if (j==0 || j==m-1) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
int main()
{
    int chon;
    char key;
    do {
        chon = menu();
        switch (chon) {
            case 1: {
                TamGiacTren();
            }break;
            case 2: {
                TamGiacDuoi();
            }break;
            case 3: {
                VeHinhCNRong();
            }break;
            default: {
                printf("\nban nhap sai, moi nhap lai lenh!");
            }
        }
        printf("\nban co muon nhap tiep lenh khong? (an c de tiep tuc)! ");
        scanf("%c",&key);
        key = getchar();
    }while (key=='c');
    return 0;
}
