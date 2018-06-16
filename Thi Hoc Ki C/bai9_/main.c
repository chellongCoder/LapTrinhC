#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,m;
   printf("Nhap vao n,m:");
   scanf("%d%d",&n,&m);

   int a[n][m];

   int i,j;
   for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("+ a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("=> Ma tran vua nhap:\n");

    int max=a[0][0];
    int min=a[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]>max)
                max=a[i][j];
            if(a[i][j]<min)
                min=a[i][j];
           printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n=> Max = %d", max);
    printf("\n=> Min = %d", min);


    return 0;
}
