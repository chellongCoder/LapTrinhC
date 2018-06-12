#include <stdio.h>
#include <conio.h>
/*
bài 2 : nhập mảng 2 chiều
tìm tổng đường chéo chính
tổng đường chéo phụ
và in ma trận xoáy
*/
void NhapMang (int n, int a[][n]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void XuatMang (int n, int a[][n]) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
}
int TongChinh (int n, int a[][n]) {
    int sum=0;
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (i==j) { //nếu các phần tử nằm trên đường chéo chính
                sum=sum+a[i][j];
            }
        }
    }
    return sum;
}
int TongPhu (int n, int a[][n]) {
        int sum=0;
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (j==n-1-i) { //nếu các phần tử nằm trên đường chéo phụ
                sum=sum+a[i][j];
            }
        }
    }
    return sum;
}
void MaTranXoay (int n, int a[][n]) { //bài này vẽ ra nháp ms làm đc
    int i, d=0, hang=n-1, cot=n-1, giatri=1;
    while (d<=n/2) { //quay nửa vòng, ví dụ n=4 thì quay 2 vòng sẽ dừng
        for (i=d; i<=cot; i++) { //hàng đầu tiên
            a[d][i] = giatri;
            giatri++; //giá trị tăng 1
        }
        for (i=d+1; i<=hang; i++) { //cột cuối cùng
            a[i][cot] = giatri;
            giatri++; //giá trị lại tăng 1
        }
        for (i=cot-1; i>=d; i--) { //hàng cuối
            a[hang][i] = giatri;
            giatri++;//giá trị lại tăng 1
        }
        for (i=hang-1; i>d; i--) { //cột đầu tiên
            a[i][d] = giatri;
            giatri++;
        }
        //hết 1 vòng   quay
        d++;
        hang--;
        cot--;
    }
}
int main ()
{
    int n;
    printf("nhap vao cap cua ma tran: ");
    scanf("%d",&n);
    int a[n][n];
    printf("nhap cac phan tu cua ma tran: \n");
    NhapMang(n,a);
    printf("\nin ma tran\n");
    XuatMang(n,a);
    printf("\ntong duong cheo chinh la: %d",TongChinh(n,a));
   printf("\ntong duong cheo phu la: %d",TongPhu(n,a));
    printf("\nma tran xoay la:\n");
    MaTranXoay(n,a);
    XuatMang(n,a);
    return 0;
}
