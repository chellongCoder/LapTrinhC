#include <stdio.h>
#include <stdlib.h>
//viết chương trình in ra các số nguyên tố từ 0 đến N (N do người dùng nhâjp)
int main()
{
    int n;
    printf("input the variable of n: ");
    scanf("%d",&n);
    int i,j,count=0; // khởi tạo 1 biến đếm
    printf("the prime numbers between 0 to %d is: ",n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            if (i%j==0) { // chia từ 1 đến i
                count++; //đến số ước của i
            }
        }
        if (count==2) { //nếu mà trong dãy từ 1 đến i, i chỉ chia hết cho 2 số (tức là 1 và chính nó)
            printf("%4d",i); // thì nó là số nguyên tố
        }
        count=0; // next sang số tiếp theo, kiểm tra thì lại phải cho biếm đếm =0
    }
    return 0;
}
