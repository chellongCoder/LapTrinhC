#include <stdio.h>
#include <stdlib.h>
//Bài tập 10: Tìm tổng dãy số
//Viết chương trình C để tìm tổng dãy số: 1 - x^2/2! + x^4/4! - ... với giá trị x và số phần tử nhập từ bàn phím.
int main()
{
    int x;
    printf("nhap gia tri cua x: ");
    scanf("%d",&x);
    int n;
    printf("nhap vao so phan tu: ");
    scanf("%d",&n);
    int i,j;
    double sum=0;
    for (i=0; i<n; i++) { //chạy đến n số hạng
        int tam=1; //cái này để tính mũ
        int sum1=1; //cái này để tính giai thừa
        for (j=0; j<2*i; j++) { //vì các giai thừa gấp đôi i (0.2.4.6...)
            int temp=x; // tính mũ
            tam=tam*temp;
        }
        for (j=1; j<=2*i; j++) { //tính giai thừa
            sum1=sum1*j;
        }
        // chuỗi đan dấu nên tính xen kẽ cộng và trừ
        if (i%2==0) { //số chẵn là dương
            sum=sum+(double)tam/sum1;
        }
        else { // số lẻ là âm
            sum=sum-(double)tam/sum1;
        }
    }
    printf("Tong = %.15f",sum);
    printf("\nso phan tu: %d",n);
    printf("\ngia tri cua x: %d",x);
    return 0;
}
