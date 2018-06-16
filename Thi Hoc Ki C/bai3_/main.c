#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap vao so phan tu:");
    scanf("%d", &n);
    int arr[n];

    int i;
    for (i=0;i<n;i++)
    {
        printf("+ arr[%d] =",i);        //Nhap mang
        scanf("%d",&arr[i]);
    }
    printf("=>Day so ban dau:");        //In ra day ban dau

    for (i=0; i<n; i++)
    {
        printf("%4d",arr[i]);
    }

    for (i=0;i<n-1; i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n=> Day so sau khi sap xep:");       //In ra day da sap xep
    for (i=0; i<n; i++)
    {
        printf("%4d",arr[i]);
    }
    return 0;
}
