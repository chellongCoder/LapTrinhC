#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
typedef struct NhanVien {
    char manv[10], hoten[30];
    int luong;
    int phuCap;

}NhanVien;

NhanVien *nhanVien;
int count = 0;

int Menu() {
    printf("---------------Menu---------------\n");
    printf("1. khoi tao danh sach\n");
    printf("2. nhap k nhan vien\n");
    printf("3. xem danh sach nhan vien\n");
    printf("4. tim kiem tuyen tinh the manv\n");
    printf("5. ket thuc\n");
    printf("----------------------------------\n");
    printf("chon:> ");
    int choice;
    scanf("%d", &choice);
    return choice;
}

void khoiTaoDanhSach() {
    nhanVien = (NhanVien*)malloc(MAX*sizeof(NhanVien));
    printf("khoi tao danh sach thanh cong!\n");
}

void nhapNhanVien() {

    int choice;

    do {
       NhanVien *sv = (NhanVien*)malloc(sizeof(NhanVien));
        printf("nhap ma nhan vien: ");
        fflush(stdin);
        gets(sv->manv);
        printf("nhap vao ho ten: ");
        fflush(stdin);
        gets(sv->hoten);
        printf("nhap vao luong: ");
        scanf("%d", &sv->luong);
        printf("nhap vao phu cap: ");
        scanf("%d", &sv->phuCap);
        *(nhanVien+count) = *sv;
        printf("ban co muon nhap them nhan vien khong? (0 or 1)\n");
        scanf("%d", &choice);
        count++;
    }while(choice==1);
    realloc(nhanVien, count*sizeof(NhanVien));
}

void xemDanhSach() {
    int i;
    printf("%-10s %-30s %-15s %-15s\n","ma  nv", "ho ten", "luong", "phu cap");
    for(i=0; i<count; i++) {
        printf("%-10s %-30s %-15d %-15d\n",  (nhanVien+i)->manv ,(nhanVien+i)->hoten, (nhanVien+i)->luong, (nhanVien+i)->phuCap);
    }
}

void timKiemTuyenTinhTheoMaNV() {
    char manv[10];
    printf("nhap vao ma nv can tim: ");
    fflush(stdin);
    gets(manv);
    int check = 0;
    int i;
    for(i=0; i<count; i++) {

        if(strcmp(manv, (nhanVien+i)->manv)==0) {
            printf("%-10s %-30s %-15d %-15d\n",  (nhanVien+i)->manv ,(nhanVien+i)->hoten, (nhanVien+i)->luong, (nhanVien+i)->phuCap);
            check = 1;
            break;
        }

    }
    if(!check) {
        printf("khong tim thay nhan vien ten %s\n", manv);
    }
}

void ketThuc() {
    printf("bye bye!");
    exit(0);
}

int main()
{

    int choice;
    do {
        choice = Menu();
        switch (choice) {
            case 1: khoiTaoDanhSach(); break;
            case 2: nhapNhanVien(); break;
            case 3: xemDanhSach(); break;
            case 4: timKiemTuyenTinhTheoMaNV(); break;
            case 5: ketThuc(); break;
            default: printf("moi ban nhap lai lenh!\n");
        }
    }while(1);

    return 0;
}
