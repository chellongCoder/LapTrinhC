#include <stdio.h>
#include <stdlib.h>
int **gen_matrix(int m, int n)
{
    int **res;
    res = (int**)malloc(m*sizeof(int*));
    int i, j;
    for(i=0; i<n; i++)
    {
        res[i] = (int*)malloc(n*sizeof(int));
        for(j=0; j<n; j++)
            res[i][j] = rand()%10;
    }
    return res;
}
void print_matrix(int **a, int m, int n)
{
    int i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}

int **submatrix(int** a, int n, int del_row, int del_col)
{
    int **res;
    int n1 = n-1;
    res = (int**)malloc(n1*sizeof(int*));
    int i,j;
    for(i=0; i<n1; i++)
        res[i] = (int*)malloc(n1*sizeof(int));
    int row, col;
    row = -1;
    for(i=0; i<n; i++)
    {
        if(i == del_row)
            continue;
        row++;
        col = -1;
        for(j=0; j<n; j++)
        {
            if(j==del_col)
                continue;
            col++;
            res[row][col] = a[i][j];
        }
    }
    return res;
}

long long det(int** a, int n)
{
    long long res;
    if(n==1)
        return a[0][0];
    else if(n == 2)
    {
        res = a[0][0]*a[1][1] - a[1][0]*a[0][1];
        return res;
    }

    //Khai triển theo dòng 0
    res = 0;
    int row, col, coef;
    row = 0;
    for(col = 0; col<n; col++)
    {
        if((col+row)%2==0)
            coef = a[row][col];
        else
            coef = -a[row][col];
        res += coef*det(submatrix(a, n, row, col), n-1);
    }

    return res;
}

int main()
{
    int n = 5;
    int **a, **b;
    a = gen_matrix(n, n);
    printf("Ma tran goc:\n");
    print_matrix(a, n, n);


    printf("Det = %lld\n", det(a, n));
    return 0;
}
