#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void NhapdathucPQ (int *X, int n) { // khai bao 1 con tro X de tham chieu nhap P, Q
    int i;
    printf("nhap da thuc X= ");
    for (i=n; i>=0; i--) { //nhap tu he so lon nhat den he so nho nhat
        *(X+i)=rand()%100; //nhap ramdom he so (co the thay bang nhap tu ban phim cung dc)
    }
}
void XuatDaThucPQ (int *X, int n) {
    int i;
    for (i=n; i>=0; i--) {
        printf("%dx(%d) ",*(X+i),i,i);
        if (i>0) {
            printf("+ ");
        }
    }
    printf("\n");
}
void congDaThuc (int *P, int *Q, int *Tong, int m, int n) {
    int i;
    if (n>m) { // neu he so cua P lon hon he so cua Q
        for (i=0; i<=n; i++) { // duyet nguoc tro lai tu phan tu cuoi cung cua P va Q de cong
            if (i<=m) { //'2 cai if nay nhap ra giay la biet duoc thuat toan'
                *(Tong+i)= *(P+i) + *(Q+i);
            }
            if (i>m) {
                *(Tong+i) = *(P+i);
            }
        }
    }
    else { //neu he so cua Q lon hon he so cua P
        for (i=0; i<=m; i++) {
            if (i<=n) { //'tuong tu ben tren'
                *(Tong+i)= *(P+i) + *(Q+i);
            }
            if (i>n) {
                *(Tong+i) = *(Q+i);
            }
        }
    }
}
void XuatMangTong (int *Tong,  int n) { // cong xong thi xuat mang Tong

        int i;
        printf("Tong=");
        for (i=n; i>=0; i--) {
            printf("%dx(%d) ",*(Tong+i),i,i);
            if (i>0) {
                printf("+ ");
            }
        }
   }
int main()
{
    srand(time(NULL));
    int n,m;
    printf("nhap vao he so cua đa thuc P: ");
    scanf("%d",&n);
    printf("nhap vao he so cua da thuc Q: ");
    scanf("%d",&m);
    int *P=(int*)malloc(n*sizeof(int)); //cap phat bo nho dong *p
    int *Q=(int*)malloc(m*sizeof(int)); //cap phat bo nho dong *Q
    int *Tong;
    NhapdathucPQ(P,n); //tham chieu P gan cho X, n gan cho n
    XuatDaThucPQ(P,n);
    printf("\n");
    NhapdathucPQ(Q,m); // tham chieu Q gan cho X, m gan cho n
    XuatDaThucPQ(Q,m);
    if (n>m) {
        Tong=(int*)malloc(n*sizeof(int));
        congDaThuc(P,Q,Tong,m,n);
        printf("\n");
        XuatMangTong(Tong,n);
    }
     else {
        Tong=(int*)malloc(m*sizeof(int));
        congDaThuc(P,Q,Tong,m,n);
        XuatMangTong(Tong,m);
     }
    free(P);
    free(Q);
    free(Tong);
    return 0;
}
