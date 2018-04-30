#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
//câu 6: xây dựng chương trình quản lý sách
//cấu trúc sách:
//    - MaSach: kiểu số nguyên
//    - TenSach: kiểu mảng ký tự
//    - MaNXB: lưu mã số nhà xuất bản. kiểu int
//    menu:
//        1. chọn 1 để tạo danh mục sách
//        2. chọn 2 để hiển thị các sách có cùng nhà nhà xuất bản
//        3. chọn 3 để kết thúc
//        chọn: >
typedef struct Sach {
    int MaSach;
    char TenSach[100];
    char TacGia[100];
    int MaNXB;
}Sach;

int menu() {
    printf("\n=============================\n");
    printf("1. tao danh muc sach\n");
    printf("2. hien thi cac sach trong cung nha xuat ban\n");
    printf("3. ket thuc\n");
    printf("=============================\n");
    printf("chon:> ");
    int choice;
    scanf("%d", &choice);
    return choice;
}

void TaoDanhMucSach(Sach books[], int *size) {
    printf("nhap so luong dau sach: ");
    scanf("%d", size);
    int i;
    for(i=0; i<*size; i++) {
        printf(">>>>nhap quyen sach %d\n", i+1);
        printf("nhap ma sach: ");
        scanf("%d", &books[i].MaSach);
        printf("nhap ten sach: ");
        fflush(stdin);
        gets(books[i].TenSach);
        printf("nhap tac gia: ");
        gets(books[i].TacGia);
        printf("nhap ma nha xuat ban: ");
        scanf("%d", &books[i].MaNXB);
    }
}

void HienThiSachTrongNXB(Sach books[], int *size) {
    int i;
    printf("nhap ma nha xuat ban: ");
    int maNXB;
    scanf("%d", &maNXB);
    int amount=0;
    printf("%-20s %-20s %-20s %-20s\n", "ma sach", "ten sach", "tac gia", "ma NXB");
    for(i=0; i<*size; i++) {
        if(books[i].MaNXB==maNXB) {
            amount++;
            printf("%-20d %-20s %-20s %-20d\n", books[i].MaSach, books[i].TenSach, books[i].TacGia, books[i].MaNXB);
        }
    }
}

void KetThuc() {
    exit(0);
}

int main()
{
    Sach *Books = (Sach*)malloc(MAX*sizeof(Sach));
    int size=-1;
    int choice;
    do {
        choice = menu();
        switch(choice) {
            case 1: {
                TaoDanhMucSach(Books, &size); break;
                if(size!=-1) {
                    realloc(Books, size);
                }
            }
            case 2: HienThiSachTrongNXB(Books, &size); break;
            case 3: KetThuc();break;
            default: printf("moi ban nhap lai!\n");
        }
    }while(1);
    return 0;
}
