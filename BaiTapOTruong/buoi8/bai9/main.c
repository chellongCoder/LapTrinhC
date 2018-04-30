#include <stdio.h>
#include <stdlib.h>
//Bài tập 8: Tạo hàm mũ
//Viết chương trình C để tạo một hàm để tính giá trị của xy.
//Ví dụ: Nhập cơ số: 3 Nhập lũy thừa: 4 Gia tri cua 34 = 81
int tinhmu (int a, int b) {
    int i;
    int tam,temp  = a;
    for (i=0; i<b-1; i++) {
        a = temp * a;
        temp = a;
    }
    return a;
}
int main()
{
    int CoSo, LuyThua;
    printf("nhap vao co so: ");
    scanf("%d%d",&CoSo,&LuyThua);
    printf("%d",tinhmu(CoSo,LuyThua));
    return 0;
}
