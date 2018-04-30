#include <stdio.h>
#include <stdlib.h>
//Bài tập 5: Kiểm tra một người có đủ tuổi bầu cử không
//Yêu cầu bài tập C này là nhập tuổi của một người, kiểm tra xem người đó có đủ tuổi bầu cử không, và sau đó in thông báo tương ứng.
// (Độ tuổi bầu cử là >= 18)
int main()
{
    int tuoi;
    do {
    printf("nhap tuoii cua cu tri bau cu: ");
    scanf("%d",&tuoi);
    }while(tuoi<0);
    if (tuoi<18) {
        printf("xin loi!!! ban chua du tuoi de tham gia bau cu.\nban co the tham gia bau cu sau %d nam.\n",(18-tuoi));
    }
    else {
        printf("ban da du tuoi bau cu");
    }
    return 0;
}
