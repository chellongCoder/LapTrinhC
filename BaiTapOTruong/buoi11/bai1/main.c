#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Câu 1. Viết chƣơng trình nhập một tệp có kiểu có tên là SO_NGUYEN.TXT chứa n (số n đƣợc nhập từ bàn phím và n <= 1000 ) số nguyên.
// Với các số nguyên đƣợc nhập vào từ bàn phím.
int main()
{
    srand(time(NULL));
    FILE *fp;
    int n, i;
    printf("nhap vao kich thuoc mang: ");
    scanf("%d",&n);
    int a[n];
    fp = fopen("SO_NGUYEN.txt", "w+"); //cả đọc cả ghi, để lúc ghi xong không cần mở file thì mới đọc đc
    fprintf(fp,"%d\n",n);
    for (i=0; i<n; i++) {
        a[i]= rand()%100;
        fprintf(fp,"%d\n",a[i]);
    }
    fseek(fp,0,SEEK_SET);
    int c;
    while (!feof(fp)) {
        c=fgetc(fp);
        printf("%c",c);
    }
    return 0;
}
