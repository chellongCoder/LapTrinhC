#include <stdio.h>
#include <stdlib.h>
//Bài tập 14: Tìm số Armstrong
//Viết chương trình C để tìm các số Armstrong trong một dãy số đã cho.
//Số Armstrong là số bằng tổng lập phương các chữ số của số đó.
//Ví dụ: số 153 là số Armstrong, bởi vì: 1^3 + 5^3 + 3^3 = 153
int main()
{
    int n,first,end;
    printf("nhap vao so dau tien: ");
    scanf("%d",&first);
    printf("nhap vao so cuoi cung: ");
    scanf("%d",&end);
    int du,tam;
    int sum;
    printf("\ncac so amstrong co trong day la: ");
    for (n=first; n<=end; n++) { //chạy từ đầu đến số cuối
        tam=n; //khởi tạo tạm = n để tính dư, nếu để n  thì sau lần lặp n sẽ về 0
        sum=0; //khởi tạo sum để tính tổng các lập phương các chữ số
        while (tam!=0) { //tách lấy các chữ số
            du=tam%10;
            tam=tam/10;
            sum=sum+(du*du*du); // cộng hết lại (mũ 3)
        }
        if (sum==n) { //nếu tổng đó = n thì in ra
        printf("%-4d",sum);
        }
    }

    int num, tram, chuc, donvi, count = 0;
    for (num = 100; num < 1000; num++)
    {
        donvi = num % 10;
        chuc  = (num / 10) % 10;
        tram  = num / 100;
        if (donvi * donvi * donvi + chuc * chuc * chuc + tram * tram * tram == num)
        {
           printf("\nSo %d thoa man", num);
           count++;
        }
    }
    printf("\nTong cong co %d so thoa man yeu cau\n", count);

    int i,j,k;
    for (i=1; i<=9; i++) {
        for (j=0; j<=9; j++) {
            for (k=0; k<=9; k++) {
                if (i*i*i + j*j*j + k*k*k == 100*i+10*j+k) {
                    printf("%d%d%d ",i,j,k);
                }
            }
        }
    }

    return 0;
}
