#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Câu 5. Viết chƣơng trình tính tổng hai ma trận: Cnxm = Anxm + Bnxm.
//Các ma trận A, B đƣợc nhập vào từ bàn phím. Ghi ba ma trận vào tệp CONG_MT.C (sử dụng kiểu nhập xuất văn bản).
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
int main()
{
    srand(time(NULL));
    int m,n;
    printf("nhap vao so hang: ");
    scanf("%d",&n);
    printf("nhap vao so cot: ");
    scanf("%d",&m);
    FILE *fp;
    fp = fopen("CONG_MT.txt","w");
    fprintf(fp,"%d %d\n",n,m);
    int a[n][m];
    fprintf(fp,"\nnhap vao ma tran A: \n");
    NhapMangFILE(n,m,a,fp);
    int b[n][m];
    fprintf(fp,"\nnhap vao mang B: \n");
    NhapMangFILE(n,m,b,fp);
    int c[n][m];
    int i,j;
    fprintf(fp,"ma tran tong: \n");
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            c[i][j] = a[i][j] + b[i][j];
            fprintf(fp,"%-4d",c[i][j]);
        }
        fprintf(fp,"\n");
    }
    return 0;
}
