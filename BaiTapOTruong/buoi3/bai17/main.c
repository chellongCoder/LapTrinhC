#include <stdio.h>
#include <stdlib.h>
//Bài tập 17: Nhập hạng và hiển thị thông báo tương ứng
//Yêu cầu bài tập C này là nhập hạng học lực (ví dụ: A, B, C, ...) của một sinh viên và từ đó hiển thị thông báo tương ứng.
//Hạng Thông báo
//E Xuất sắc
//V Rất giỏi
//G Giỏi
//A Trung bình
//F Trượt
int main()
{
    char rank;
    printf("nhap hang hoc luc: ");
    scanf("%c",&rank);
    switch (rank) {
        case 'E': printf("hoc luc cua ban la: Xuat sac."); break;
        case 'V': printf("hoc luc cua ban la: Rat gioi."); break;
        case 'G': printf("hoc luc cua ban la: Gioi."); break;
        case 'A': printf("hoc luc cua ban la: Trung Binh."); break;
        case 'F': printf("hoc luc cua ban la: Trươt."); break;
    }
    return 0;
}
