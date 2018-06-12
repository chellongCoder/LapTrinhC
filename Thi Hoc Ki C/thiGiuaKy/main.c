#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
int menu () {
    printf("============menu lenh: ========\n");
    printf("======1. de bai cau 1 ghi vao day\n");
    printf("======2. de bai cau 2 ghi vao day\n");
    printf("======3. de baai cau 3 ghi vao day\n");
    int chon;
    printf("moi ban chon lenh: ");
    scanf("%d",&chon);
    return chon;
}

void NhapMang (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void XuatMang (int a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%-4d",a[i]);
    }
}
void TimMax (int a[], int n) {
    int i,tam;
    int max = a[0];
    for (i=0; i<n; i++) {
        if (a[i]>max) {
            max = a[i];
            tam=i;
        }
    }
    printf("\ngia tri lon nhat trong mang la: %d \n vi tri cua max trong mang la %d",max, tam);
}

int KiemTraDX (char *s) {
    int i;
    int check;
    int n = strlen(s);
    for (i=0; i<n; i++) {
        if (s[i] == s[n-1-i]) {
            check = 1;
        }
        else {
            check = 0;
        }
    }
    return check;
}
int tinhmu (int x, int n) {
    int i;
    int tam=x;
    int temp=1;
    for (i=1; i<=n; i++) {
        x=tam*temp;
        temp=x;
    }
    return x;
}
int TinhGTBieuThuc (int a[], int n, int x) {
    int sum=0;
    int i;
    for (i=n-1; i>=0; i--) {
        sum = sum + a[i]*tinhmu(x,i);
    }
    return sum;
}
int main()
{
    int chon;
    char key;
    do {
        chon = menu();
        switch (chon) {
            case 1: {
                int n;
                printf("nhap vao kich thuox mang: ");
                scanf("%d",&n);
                int a[n];
                printf("nhap mang\n");
                NhapMang(a,n);
                printf("xuat mang\n");
                XuatMang(a,n);
                TimMax(a,n);
            }break;
            case 2: {
                int n;
                printf("nhap vao gia tri cua n: ");
                scanf("%d",&n);
                int x;
                printf("nhap vao gia tri cua x: ");
                scanf("%d",&x);
                int a[n];
                printf("\nnhap cac he so bieu thuc: \n");
                NhapMang(a,n);
                printf("gia tri bieu thuc la: %d",TinhGTBieuThuc(a,n,x));

            }break;
            case 3: {
                char str[30];
                printf("nhap vao 1 chuoi: ");
                fflush(stdin);
                gets(str);
                int check = KiemTraDX(str);
                if (check == 1) {
                    printf("\nchuoi [%s] la chuoi dx\n",str);
                }
                else {
                    printf("\nchuoi [%s] la chuoi dx\n",str);
                }
            }break;
            default: {
                printf("\nban nhap sai, moi nhap lai lenh!");
            }break;
        }
    printf("\nban co muon nhap tiep lenh khong? (an c de tiep tuc)! ");
    scanf("%c",&key);
    key = getchar();
    }while (key=='c');
    return 0;
}
