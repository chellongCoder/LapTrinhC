#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
int main()
{
    // in ra các phần  tử của mảng 2 chiều
    int a[2][3]; // 2 la số dòng, 3 là số cột
    int i,j,x;

    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++) //chạy từ a[0][0] đến a[1][2]
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d", &x);
            a[i][j]=x;
        }
    }
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d",a[i][j]);
            if (j==2)
            {
                printf("\n");
            }
            else printf(" ");
        }
    } */
    // nhập xuất mảng 2 chiều
    /*
int m,n;

printf("nhap vao so cot ");
scanf("%d",&m);
printf("nhap vao so hang ");
scanf("%d", &n);
int a[m][n]; // m là số hàng , n là số cột
printf("nhap giai tri tung phan tu \n");
    int i,j;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("a[%d][%d]= ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
printf("xuat cac phan tu trong mang \n");
for (i=0; i<m; i++)
{
    for (j=0; j<n; j++)
    {
        printf("%d  ", a[i][j]);
    }
    printf("\n");
}
int s;
s=0;
for (i=0; i<m; i++)
{
    for (j=0; j<n; j++)
       {s=s+a[i][j];}
}
printf("tong cac so trong mang la %d\n",s);
// in ra ca s phần tử nằm dưới đường chéo chính
for (i=0; i<m; i++)
{
    for (j=0; j<=i; j++) //
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
// inn ra tổng các phần tử nằm trên đường chéo chính
int tong=0;
for (i=0; i<m; i++)
{
    for (j=0; j<n; j++)
    {
        if (i==j)
        {
            tong+=a[i][j];
        }
    }
}
printf("tong= %d\n",tong);
// in ra các phần tử nằm phía trên đường chéo chính
for (i=0; i<m; i++)
{

    for (j=0; j<n; j++)
    {
        if (j<i)
        {printf("  ");}
        else {printf("%d ", a[i][j]);}
    }
    printf("\n");
}
return 0;
} */
//21.	 Nhâp vào 2 ma trận 1 ma trận 3 hàng 3 cột và 1 ma trận 3 hàng 2 cột.
//rồi in ra màn hình
void nhapmatran1 (int a[][100], int m, int n)
    {
        int i,j;
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                printf("a[%d][%d]= ", i,j);
                scanf("%d", &a[i][j]);
            }
        }
    }
void xuatmatran1 (int a[][100], int m, int n)
{
    int i,j;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("a[%d] = %d ",i, a[i][j]);
        }
        printf("\n");
    }
}
void nhapmatran2 (int a[][100], int a, int b)
{
    int i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; i++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmatran2 (int a[][100], int a, int b)
{
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            printf("")
        }
    }
}
//Nhập vào ma trận  n*m  tìm max, min và số lần suất hiện max , min và
//in ra tất cả trí max, min.
void timmaxmin (int a[][100], int n, int m)
{
    int i,j,max,dem=0;
    max=a[0][0];
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
          if (a[i][j]>max)
          {
              dem++;
              max = a[i][j];
          }
        }
    }
    printf("max= %d va co %d phan tu max\n", max,dem);
    printf("vi tri phan tu max la ");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            if (a[i][j]==max)
            {
                printf("a[%d][%d]",i,j);
            }
        }
    }
}
// 24.	Nhập vào 2 ma trận vuông cấp n sau đó tính cộng trừ 2 ma trận.

void main ()
{
    int a[100][100];
    int m,n;
    int  a,b;
    printf("nhap vao so hang ");
    scanf("%d", &m);
    printf("nhap vao so cot ");
    scanf("%d", &n);
    printf("so phan tu trong ma tran la \n");
    nhapmatran1(a,m,n);
    printf("xuat cac phan tu trong ma tran \n");
    xuatmatran1(a,m,n);
    timmaxmin(a,m,n);

    return 0;
}











