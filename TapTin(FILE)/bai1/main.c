#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 1 file, nhập 1 số n vào màn hình rồi ghi vào file từ 0->n rồi in ra màn hình chuỗi số vừa ghi
int main()
{
    srand(time(NULL));
    FILE *fp;
    fp = fopen("input.txt", "w"); //khởi tạo file
    int n;
    scanf("%d",&n); //nhập số phần tử
    fprintf(fp,"%d\n",n); //ghi sô phần tử ra file
    int i=0;
    for (i=0; i<n; i++) {
        fprintf(fp,"%-4d",rand()%100);// ghi các phần tử từ 0 đến n ra file
    }
    fclose(fp);
    fseek(fp,0,0); //đưa con trỏ về đầu
    int a[100];
    fp = fopen("input.txt", "r");
    while (!feof(fp)) {
        fscanf(fp,"%d",&a[i]);
        printf("%-4d",a[i]);
    }
    fclose(fp);
    return 0;
}
