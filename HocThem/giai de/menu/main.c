#include <stdio.h>
#include <stdlib.h>
int menu () {
    printf("======================================\n");
    printf("1.	Tao danh sach sinh vien \n");
    printf("2.	Hien thi danh sach sinh vien \n");
    printf("3.	Chen them sinh vien \n");
    printf("4.	Xoa một sinh vien\n");
    printf("5.	Sua một sinh vien\n");
    printf("6. ket thuc\n");
    printf("======================================\n");
    printf("ban muon chon lenh nao? ");
    int chon;
    scanf("%d",&chon);
    return chon;
}

void tao_danh_sach() {
    printf("tao dnah sach\n");
}

void in_danh_sach () {
    printf("in danh sach\n");
}

void chen_sinh_vien () {
    printf("chen sinh vien\n");
}

void xoa_sinh_vien () {
    printf("xoa sinh vien\n");
}

void sua_sinh_vien () {
    printf("sua sinh vien\n");
}
main()
{
    int chon;
    do {
        chon = menu();
        switch (chon) {
            case 1: {
                tao_danh_sach();
            }break;
            case 2: {
                in_danh_sach();
            }break;
            case 3: {
                chen_sinh_vien();
            }break;
            case 4: {
                xoa_sinh_vien();
            }break;
            case 5: {
                sua_sinh_vien();
            }break;
        }
    }while (chon!=6);
    return 0;
}
