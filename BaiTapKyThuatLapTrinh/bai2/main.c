#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//in ra cac so nguyen to nho hon n dung de quy va vong lap
int menu() {
    printf("==============================\n");
    printf("1. nhap so nguyen duong\n");
    printf("2. hien thi cac so nguyen duong su dung vong lap\n");
    printf("3. hien thi cac so nguyen duong su dung de quy\n");
    printf("4. thoat\n");
    printf("==============================\n");
    int choice;
    printf("chon:> ");
    scanf("%d", &choice);
    return choice;
}

void nhapSoNguyenDuong (int *n) {
    printf("nhap n:> ");
    scanf("%d", n);
}

int checkSoNguyenTo(int n) {
    int i;
    int dem = 0;
    for(i=1; i<=n; i++) {
        if(n%i==0) {
            dem++;
        }
    }
    if(dem==2) return 1;
    return 0;
}
void inCacSoNguyenToSuDungVongLap(int n) {
    int i;
    printf("cac so nguyen to su dung vong lap: ");
    for(i=0; i<=n; i++) {
        if(checkSoNguyenTo(i)) {
            printf("%d\t", i);
        }
    }
}

int is_soNT(int n, int c, int d){

    if(c>d) return 1;
    if(n%c==0) return 0;
    return is_soNT(n,c+1,d);
}
void inCacSoNguyenToSuDungDeQuy(int n) {
    if(n==1) {
        printf("1"); return;
    }
    if(is_soNT(n,2, sqrt(n))) {
        printf("%d\t", n);
    }
    inCacSoNguyenToSuDungDeQuy(n-1);
}
void thoat() {
    exit(0);
}
int main()
{
    int n;
    int choice;
    do {
        choice = menu();
        switch(choice) {
            case 1: nhapSoNguyenDuong(&n);  break;
            case 2: inCacSoNguyenToSuDungVongLap(n); break;
            case 3: inCacSoNguyenToSuDungDeQuy(n); break;
            case 4: thoat(); break;
        }
    }while(1);
    return 0;
}
