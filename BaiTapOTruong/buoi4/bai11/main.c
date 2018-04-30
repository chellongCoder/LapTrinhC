#include <stdio.h>
#include <stdlib.h>
//Bài tập 11: Tính tổng dãy số
//Viết chương trình C để tính tổng dãy số 9 + 99 + 999 + ... với số phần tử nhập từ bàn phím.
int main()
{
    int n;
    printf("nhap so phan tu: ");
    scanf("%d",&n);
    int i,j,k;

    int sum=0,sum1; //sum là tổng dãy, sum1 để tính từng phần tử (9,99,999,9999....)
    for (i=0; i<n; i++) { //chạy đến n số hạng
        sum1=0;
        for (j=i; j>=0; j--) { //mỗi phần tử từ i tức là số chữ số 0 (ví dụ như 1000 có 4 cs 0) về 0
            int tam=1;
            for (k=0; k<j; k++) { //vòng lặp này để tính mũ của 10
                int temp=10;
                tam=tam*temp;
            }
            sum1=sum1+(9*tam); //tính từng phần tử 1 ví dụ (9*1000 + 9*100 + 9*10 +9)
        }
        sum=sum+sum1; //cộng hết lại để ra 1 phần tử (ví dụ 9999)
        printf("%d\t",sum1); //in ra các phần tử
        if (i<n-1) {
            printf("+\t");
        }
    }
    printf("\nTong cua day tren la: %d",sum);
    return 0;
}
/*
9*0 + 9
9*10 + 9
9*100 + 9*10 +9
9*1000 + 9*100 + 9*10 + 9

*/
