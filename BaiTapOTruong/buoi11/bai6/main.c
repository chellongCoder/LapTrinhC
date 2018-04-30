#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Câu 6. Viết chƣơng trình tính tích hai ma trận: Cnxm = Anxp  Bpxm.
//Trong đó dữ liệu vào: n, p, m và hai ma trận A, B đƣợc ghi trên tệp TICH_MT.C.
//Ghi bổ sung ma trận tích tính đƣợc vào cuối tệp này (sử dụng kiểu nhập xuất văn bản), rồi mở tệp ra xem kết quả.
void NhapMangFILE(int n, int m, int x[][m], FILE *fp) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            x[i][j] = rand()%100;
            fprintf(fp,"%-4d",x[i][j]);
        }
        fprintf(fp,"\n");
    }
}
void NhanMaTran (int n, int p, int m, int a[][p], int b[][m], int c[][m], FILE *fp) {
    int i,j,k,tam;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            c[i][j] = 0;
            for (k=0; k<p; k++) {
                tam = a[i][k]*b[k][j];
                c[i][j] = c[i][j] + tam;
            }
        }
    }
}
int main()
{
    srand(time(NULL));
    int m,n,p;
    printf("nhap vao so hang của ma tran A: ");
    scanf("%d",&n);
    printf("nhap vao so cot va so cot cua ma tran A va so hang cua ma tran B: ");
    scanf("%d",&p);
    printf("nhap vao so cot cua ma tran B: ");
    scanf("%d",&m);
    FILE *fp;
    fp = fopen("CONG_MT.txt","w");
    fprintf(fp,"%d %d %d\n",n,p,m);
    int a[n][p];
    fprintf(fp,"\nnhap vao ma tran A: \n");
    NhapMangFILE(n,p,a,fp);
    int b[p][m];
    fprintf(fp,"\nnhap vao mang B: \n");
    NhapMangFILE(p,m,b,fp);
    int c[n][m];
    fprintf(fp,"\n tich 2 ma tran la: \n");
    NhanMaTran(n,p,m,a,b,c,fp);
    NhapMangFILE(n,m,c,fp);
    return 0;
}
