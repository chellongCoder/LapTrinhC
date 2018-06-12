#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ghi 1 chuỗi vào 1 file rồi đọc nó in ra ngoài màn hình console, sau đó ghi tiếp 1 chuỗi nữa vào sau chuỗi đã ghi trc đó
int main()
{
    FILE *fp;
    fp = fopen("chuoi.txt", "w+"); //vừa đọc vừa ghi
    fprintf(fp,"we love\n");
    //fclose(fp);
    fseek(fp,0,0); //đưa con trỏ về đầu chuỗi để đọc
    char c;
    //fp = fopen("chuoi.txt", "r");
    while (!feof(fp)) { //khi chưa kết thúc file
        c = fgetc(fp); //đọc từng kí tự
        printf("%c",c); // in kí tự đó ra mh
    }
    fclose(fp);
    fp = fopen("chuoi.txt", "a+"); //ghi vào cuối file và đọc từ đầu file
    fputs("our country",fp);
    fseek(fp,strlen("we love\n"),0); //đưa con trỏ về cuối chuỗi "we love\n"
    while (!feof(fp)) { //khi chưa kết thúc file
        c = fgetc(fp); //đọc từng kí tự
        printf("%c",c); //in kí tự đó ra mh
    }
    fclose(fp);
    return 0;
}
