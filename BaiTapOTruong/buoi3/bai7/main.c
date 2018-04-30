#include <stdio.h>
#include <stdlib.h>

//Bài tập 7: Kiểm tra và phân loại chiều cao
//Nhập chiều cao của một người, kiểm tra và phân loại chiều cao của người đó: lùn, cao trung bình, cao, cao bất thường
int main()
{
    int height;
    printf("nhap chieu cao cua 1 nguoi (don vi: cm): ");
    scanf("%d",&height);
    if (height<150) {
        printf("Phan loai: lun.\n");
    }
    else if (height>=150 && height<170) {
        printf("Phan Loai: cao trung binh.\n");
    }
    else if (height>=170 && height<190) {
        printf("Phan loai: cao.\n");
    }
    else {
        printf("Phan loai: cao bat thuong.");
    }
    return 0;
}
