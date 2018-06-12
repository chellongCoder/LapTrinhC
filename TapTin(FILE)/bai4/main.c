#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//tạo 1 file với 10 số nguyên, tính trung bình 10 số đó rồi ghi vào file, sau đó in ra mh
int main()
{
    srand(time(NULL));
    FILE *fp;
    fp = fopen("trungbinh.txt", "w+"); //vừa đọc vừa ghi
    int a[10]; //mảng 10 sô nguyên
    int i;
    for (i=0; i<10; i++) {
        a[i] = rand()%100; //random số nhỏ hơn 100
        fprintf(fp,"%d\n",a[i]); //ghi 10 số đó vào file
    }
    int sum=0;
    for (i=0; i<10; i++) {
        sum = sum+a[i]; //cộng 10 số lại
    }
    fprintf(fp,"gia tri trung binh cua 10 so la: %.2f",(float)sum/10); //ghi gttb 10 sô đó vào file
    fseek(fp,0,0);// cho con trỏ về đầu
    char c;
    while (!feof(fp)) { //duyệt hết file
        c = fgetc(fp);//in từng kí tự ra màn hình
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}
