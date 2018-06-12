#include <stdio.h>
#include <stdlib.h>
int row, col;


void NhapMaTran (int a[][col]) {
    int i,j;
    for (i=0; i<row; i++) {
        for (j=0; j<col; j++) {
            printf("nhap a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void XuatMaTran (int a[][col]) {
    int i,j;
    for (i=0; i<row; i++) {
        for (j=0; j<col; j++) {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
}
void tim_max_min (int a[][col]) {
    int i,j;
    int max=a[0][0], min=a[0][0];
    for (i=0; i<row; i++) {
        for (j=0; j<col; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    printf("\nmax = %d", max);
    printf("\nmin = %d",min);
}
int main()
{
    printf("nhap vao hang: ");
    scanf("%d",&row);
    printf("nhap vao cot: ");
    scanf("%d",&col);
    int a[row][col];
    NhapMaTran(a);
    XuatMaTran(a);
    tim_max_min(a);
    return 0;
}
