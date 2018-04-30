#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Câu 5. Dùng kết hợp struct và union để nhập vào danh sách các học sinh của một lớp học. Trong đó các thành phần chung là: Ho_ten, Que, Gioi tinh, Tong_diem
Các thành phần riêng ứng với giới tính là:
Nữ: Điểm hát, điểm múa.
Nam: Điểm thể dục, điểm tin
- Nhập dữ liệu cho các học sinh. Sau đó in ra danh sách học sinh theo dạng
DANH SACH HOC SINH NU
STT Ho Ten Que Diem hat Diem mua Tong
DANH SACH HOC SINH NAM
STT Ho Ten Que Diem thể dục Diem tin Tong
*/

typedef struct {
    float DiemHat, DiemMua, DiemTheDuc, DiemTin;
}diem;

typedef struct {
    char gioitinh[30];
    diem d;
    char HoTen[30];
    char QueQuan[30];
    float TongDiem;
}hocsinh;

hocsinh input () {
    hocsinh hs;
    printf("nhap vao ten hoc sinh: ");
    fflush(stdin);
    gets(hs.HoTen);
    printf("nhap vao que quan: ");
    fflush(stdin);
    gets(hs.QueQuan);
    printf("nhap vao gioi tinh: ");
    fflush(stdin);
    scanf("%s",&hs.gioitinh);
    if (strcmp(hs.gioitinh,"nu") == 0 ) {
        printf("nhap diem hat: ");
        scanf("%f",&hs.d.DiemHat);
        printf("nhap vao diem mua: ");
        scanf("%f",&hs.d.DiemMua);
        hs.TongDiem = hs.d.DiemHat + hs.d.DiemMua;
    }
    else if (strcmp(hs.gioitinh,"nam") == 0) {
        printf("nhap diem the duc: ");
        scanf("%f",&hs.d.DiemTheDuc);
        printf("nhap vao diem tin: ");
        scanf("%f",&hs.d.DiemTin);
        hs.TongDiem = hs.d.DiemTheDuc + hs.d.DiemTin;
    }
    return hs;
}

void output (hocsinh *hs, int n) {
    int i;
    printf("\nDANH SACH HOC SINH NU\n");
    printf("%-20s %-30s %-20s %-20s %-20s %-20s\n", "STT", "Ho Va Ten", "que quan", "DIem hat", "Diem mua","tong diem");
    for (i=0; i<n; i++) {
        if (strcmp((hs+i)->gioitinh,"nu") == 0) {
             printf("%-20d %-30s %-20s %-20.2f %-20.2f %-20.2f\n",i+1, (hs+i)->HoTen, (hs+i)->QueQuan, (hs+i)->d.DiemHat, (hs+i)->d.DiemMua,(hs+i)->TongDiem);
        }
    }
    printf("\nDANH SACH HOC SINH Nam\n");
    printf("%-20s %-30s %-20s %-20s %-20s %-20s\n", "STT", "Ho Va Ten", "que quan", "DIem the duc", "Diem tin","tong diem");
    for (i=0; i<n; i++) {
        if (strcmp((hs+i)->gioitinh,"nam") == 0) {
            printf("%-20d %-30s %-20s %-20.2f %-20.2f -%20.2f\n", i+1, (hs+i)->HoTen, (hs+i)->QueQuan, (hs+i)->d.DiemTheDuc, (hs+i)->d.DiemTin, (hs+i)->TongDiem);
        }
    }
}
int main()
{
    hocsinh *hs;
    int n;
    printf("nhap vao so hoc sinh: ");
    scanf("%d",&n);
    hs = (hocsinh*)malloc(n*sizeof(hocsinh));
    int i;
    for (i=0; i<n; i++) {
        printf("\n===========nhap hoc sinh thu %d==============\n",i+1);
        *(hs+i) = input();
    }
    output(hs,n);
    return 0;
}
