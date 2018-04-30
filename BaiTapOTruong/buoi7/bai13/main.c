#include <stdio.h>
#include <stdlib.h>
//Bài tập 13: Lấy chuỗi con từ chuỗi đã cho
//Viết chương trình C để lấy chuỗi con, với vị trí bắt đầu và độ dài chuỗi con xác định, từ chuỗi đã cho.
void LayChuoiCon (int batdau, int length, char *s) {
    char tam[30]; //1 chuỗi tạm
    int i=0;
    int j=0;
    while (s[i]!=NULL) {
        if (i>=batdau-1) { //vì chuỗi tính từ phần tử 0, ví dụ vị trí 4 tương ứng với a[3]
            tam[j] = s[i]; //cho chuỗi con bằng chuỗi tạm
            j++;
            if (j==length) { //nếu đạt đủ độ dài chuỗi
                break; //thoát
            }
        }
        i++;
    }
    printf("chuoi con duoc lay  tu chuoi bat dau la: ");
    for (j=0; j<length; j++) { //in chuỗi con
        printf("%c",tam[j]);
    }
}
int main()
{
    char chuoi[30];
    printf("nhap mot chuoi: ");
    fflush(stdin);
    gets(chuoi);
    int batdau, length;
    printf("nhap vao vitri bat dau lay chuoi con: ");
    scanf("%d",&batdau);
    printf("nhap vao do dai chuoi con: ");
    scanf("%d",&length);
    LayChuoiCon(batdau,length,chuoi);
    return 0;
}
