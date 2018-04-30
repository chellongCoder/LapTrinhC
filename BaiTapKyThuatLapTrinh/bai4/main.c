#include <stdio.h>
#include <stdlib.h>
//1. Chon 1 de Nhap vao mot ma tran
//2. Chon 2 de In cac phan tu tren duong cheo chinh
//3. Chon 3 de Ket thuc
//khi người dùng chọn 1 thì gọi hàm NhapMaTran() cho phép người
//dùng nhập vào ma trận vuông cấp n*n phần tử. Mỗi phần tử là 1 số
//nguyên dươg
//khi người dùng chọn 2 thì gọi hàm InCheoChinh() để thực hiện chức
//năng hiển thị các phần tử trên đường chéo chính theo định dạng (giả sử ma trận 3x3)
//1   *   *
//*   10  *
//*   *   9
int Menu() {
    printf("------------Menu--------------\n");
    printf("1. nhap ma tran\n");
    printf("2. in cac phan tu tren duong cheo chinh\n");
    printf("3. ket thuc\n");
    printf("------------------------------\n");
    printf("chon:> ");
    int choice;
    scanf("%d", &choice);
    return choice;
}

void nhapMaTran(int **Matrix, int *row, int *col) {

    printf("------------nhap mang-----------\n");
    int i,j;
    for(i=0; i<*row; i++) {
        for(j=0; j<*col; j++) {
            printf("nhap a[%d][%d]: ",i,j);
            scanf("%d", (*(Matrix+j)+i));
        }
    }

}

void inMaTran(int **Matrix, int *row, int *col) {
    int i,j;
    for(i=0; i<*row; i++) {
        for(j=0; j<*col; j++) {
            printf("%d\t", *(*(Matrix+j)+i));
        }
        printf("\n");
    }
}

void inMaTranDuongCheoChinh(int **MaTrix, int *row, int *col) {
    int i,j;
    for(i=0; i<*row; i++) {
        for(j=0; j<*col; j++) {
            if(i==j) {
                printf("%d\t", *(*(MaTrix+j)+i));
            } else {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

void ketThuc() {
    printf("bye bye");
    exit(0);
}
int main()
{
    int **Matrix;
    int row, col;
    printf("nhap vao hang: ");
    scanf("%d", &row);
    printf("nhap vao cot: ");
    scanf("%d", &col);
    Matrix = (int**)malloc(row*sizeof(int*));
    int i;
    for(i=0; i<row; i++) {
        *(Matrix+i) = (int*)malloc(col*sizeof(int));
    }
    int Choice;
    do {
        Choice = Menu();
        switch(Choice) {
            case 1: nhapMaTran(Matrix, &row, &col); break;
            case 2: inMaTranDuongCheoChinh(Matrix, &row, &col); break;
            case 3: ketThuc(); break;
            default: printf("moi ban nhap lai!");
        }
    }while(1);

    return 0;
}
