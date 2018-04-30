#include <stdio.h>
#include <stdlib.h>
//Câu 2. Viết chƣơng trình đọc tệp có tên là SO_NGUYEN.DAT đƣợc lập từ câu 1. Sau đó in các số nguyên ra màn hình.
int main()
{
    FILE *fp;
    fp = fopen("SO_NGUYEN.txt","r");
    int n;
    fscanf(fp,"%d",&n);
    printf("%d\n\n",n);
    int a[n];
    int i;
    for (i=0; i<n; i++) {
        fscanf(fp,"%d",&a[i]);
        printf("%d\n",a[i]);
    }
    fclose(fp);

    return 0;
}
