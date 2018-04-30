#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Câu 3. Viết chƣơng trình nhập vào một tệp văn bản (với tên tệp đƣợc nhập từ bàn phím –
//và do ngƣời dùng lựa chọn) có chứa n (số n đƣợc nhập từ bàn phím và n <= 1000 ) số nguyên với yêu cầu: mỗi dòng của tệp chỉ chứa 10 số nguyên.

int main()
{
    srand(time(NULL));
    FILE *fp;
    fp = fopen("SO_NGUYEN.txt", "w");
    int n;
    printf("nhap vao n só nguyen: ");
    scanf("%d",&n);
    fprintf(fp,"%d\n\n",n);
    int a[n];
    int i;
    for (i=1; i<=n; i++) {
        a[i] = rand()%100;
        fprintf(fp,"%-4d",a[i]);
        if (i%10==0) {
            fprintf(fp,"\n");
        }
    }
    fclose(fp);
    return 0;
}
