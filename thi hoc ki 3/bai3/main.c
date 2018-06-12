#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Bài 3 (1 điểm). Số quá đẹp là số đẹp đến mức độ chúng ta không thể nào định nghĩa được vẻ đẹp của chúng.
// Chỉ cần biết số quá đẹp không phải là số chính phương và số đối xứng,
 //nếu thỏa điều kiện đó thì “có thể” đó là số quá đẹp. Nhập vào n, hãy cho biết xem n có thể là số quá đẹp hay không.
 int KiemTraSoCP(int x) {
     int i;
     for (i=0; i<=sqrt(x); i++) {
        if (i*i==x) {
            return 1;
        }
     }
     return 0;
 }
 int tam;
 int KiemTraDX (int x) {
    int a[100];
    int du;
    int i=0;
    while (x!=0){
        du=x%10;
        x=x/10;
        a[i]=du;
        i++;
    }
    int n=i-1;
    for (i=0; i<n; i++) {
        if(a[i]=a[n-i]) {
            tam=1;
        }
        else {
            tam=0;
        }
    }
    if (tam==1) {
        return 1;
    }
 }
int main()
{
    int x;
    printf("enter value of x: ");
    scanf("%d",&x);

    if(KiemTraSoCP(x)==1 && KiemTraDX(x)==1) {
        printf("\n so sieu dep la %d",x);
    }
    else {
        printf("NULL");
    }

    return 0;
}
