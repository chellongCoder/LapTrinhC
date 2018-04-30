#include <stdio.h>
#include <stdlib.h>
//Bài tập 2: Hiển thị các số Hex từ 0-255
//Viết chương trình C để hiển thị các số trong hệ thập lục phân có giá trị 0-255 (hệ thập phân)
// trong 16 hàng, trong đó: hàng đầu sẽ gồm các số từ 0-15, hàng thứ hai sẽ gồm các số từ 16-31, ...
int main()
{
    int i=0;
    printf("hien thi bang so hexa tu 0-255 (he thap phan)\n");
    printf("================================================\n");
    while (i<=255){
        if (i%16==0) {
            printf("\n%02x ",i);
        }
        else {
            printf("%02x ",i);
        }
        i++;
    }
    return 0;
}
