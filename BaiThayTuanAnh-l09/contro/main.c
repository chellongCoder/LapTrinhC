#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long x = 0x1122334455667788;
    unsigned char *pb = (unsigned*)&x;
    unsigned short *pw = (unsigned*)&x;
    int i;
    for (i=0; i<8; i++) {
        printf("%02x ",pb[i]);
    }
    printf("\n");
    for (i=0; i<8; i++) {
        printf("%04x ", pw[i]);
    }
    int n;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);
    int *p;
    p = (int*)malloc(n*sizeof(int));

    return 0;
}
