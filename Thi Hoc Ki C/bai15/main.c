#include <stdio.h>
#include <stdlib.h>
#include <time.h>
FILE *FILEout;
FILE *FILEin;
int n,m;
void TaoMaTranA(int n, int m, int a[n][m]) {

    int i,j;
    for (i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            a[i][j]=rand()%50;
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    FILEout=fopen("MATRAN.txt", "w");
    fprintf(FILEout,"%d\n%d\n",n,m);
    fprintf(FILEout,"MA TRAN A:\n");
    for (i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            fprintf(FILEout, "%3d", a[i][j]);
        }
        fprintf(FILEout, "\n");
    }
    fprintf(FILEout,"\n");
    fclose(FILEout);
}
void TaoMaTranB(int n, int m, int b[n][m]) {

    int i,j;
    for (i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            b[i][j]=rand()%50;
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }
    FILEout=fopen("MATRAN.txt", "a");
    fprintf(FILEout,"MA TRAN B:\n");
    for (i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            fprintf(FILEout, "%3d", b[i][j]);
        }
        fprintf(FILEout, "\n");
    }
    fclose(FILEout);
}
void CongMaTran(int Tong[n][m], int a[n][m], int b[n][m]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            Tong[i][j]=a[i][j]+b[i][j];
        }
    }
    FILEout=fopen("MATRAN.txt", "a");
    fprintf(FILEout,"\nTong Ma Tran\n");
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            fprintf(FILEout,"%3d",Tong[i][j]);
        }
        fprintf(FILEout,"\n");
    }
    fclose(FILEout);
}
int main()
{
    srand(time(NULL));
    printf("nhao vao 2 so n,m: ");
    scanf("%d%d",&n,&m);
    int a[n][m], b[n][m];
    printf("MA TRAN A: \n");
    TaoMaTranA(n,m,a);
    printf("\n\nMA TRAN B: \n");
    TaoMaTranB(n,m,b);
    int Tong[n][m];
    CongMaTran(Tong,a,b);
    return 0;
}
