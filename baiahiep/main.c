#include <stdio.h>
#include <stdlib.h>
void bai1 (int a , int b)
{
    //bài 1

    printf("nhap vao so a ");
    scanf("%d", &a);
    printf("nhap vao so b ");
    scanf("%d", &b);
    int max, min;
    max =a;
    min =a;
    if (b>max) max =b;
    if (b<min) min =b;
    printf("max =%d\n",max);
    printf("min= %d\n",min);
}
void bai2 (int a, int b , int c)
//bài 2
{
    int max,min;
    printf("nhap vao so a ");
    scanf("%d", &a);
    printf("nhap vao so b" );
    scanf("%d", &b);
    printf("nhap vao so c ");
    scanf("%d", &c);
    max = a;
    if (b>max) max =b;
    if (c>max) max =c;
    min = b;
    if (b<min) min =b;
    if (c<min) min =c;
    printf("max =%d\n",max);
    printf("min =%d\n",min);
}
void bai3 (int sum, int n) {
printf("nhap vao n so hang ");
scanf("%d", &n);
sum=0;
int i;
for (i=1; i<=n; i++) {
    sum=sum+i;
}
printf("sum =%d\n",sum);
}
void bai4 (int n, float sum) {
printf("nhap vao n so hang ");
scanf("%d", &n);
sum=0;
int i;
for (i=1; i<=n; i++){
    sum= sum+ (float) 1/(2*i+1);
}
printf("sum =%0.2f",sum);
}

void UCLN_BCNN (){
    int a, int b
    printf("nhap vao so a ");
    scanf("%d", &a);
    printf("nhap vao so b ");
    scanf("%d",&b);
int BSCNN;
    BSCNN = a*b;
int du=0;
while (b!=0) {
    du=a%b;
    a=b;
    b=du;
}
    printf("uoc chung lon nhat la %d",a);
    BSCNN = BSCNN / a;
    printf("boi so chung nho nhat la %d\n",BSCNN);
}

void bai6 (int n) {
    do {
            printf("nhap vao so n ");
            scanf("%d", &n);
       } while (n<=0);
    if (n==1) printf("1 khong phai so nguyen to\n");
    if (n==2) printf("2 la so nguyen to\n");
    else {
    int i;
    int ok=0;
    for (i=2; i<n; i++) {
        if (n%i==0) {
            printf("%d khong phai so nguyen to\n",n);
            ok=1;
        }
    }
    if (ok==0) {
        printf("%d la so nguyen to\n",n);
    }
    else {
        printf("%d khong la so nguyen to\n",n);
    }
}
}
void bai7 (int x, int i, int j) {
    printf("nhap vao n so hang ");
    scanf("%d", &x);
    printf("cac so nguyen to tu 1 den n la\n");
    int ok;
for (i=1; i<=x; i++) {
    ok=0;
    int m=i;
    //if (m==2) printf("%d ",m);
    for (j=2; j<m; j++){
        if (m%j==0) {
            ok=1;
            break;
        }
    }
    if (ok==0) {
        printf("%d ",m);
    }
}
}
int main()
{
    int a,b;
   // bai1(a,b);
    int c;
   // bai2(a,b,c);
    int sum,n;
    //bai3(sum, n);
    //bai4 (sum,n);
    //bai5 (a,b);
    //bai6(n);
    int x,i,j;
    bai7 (x,i,j);
    return 0;
}
