#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STT	Ho ten	Tuoi	Diem TB
//Hàm main() hiển thị menu để chọn các chức năng bằng cách nhập số tương ứng như sau
//1.	Tao danh sach sinh vien
//2.	Hien thi danh sach sinh vien
//3.	Chen them sinh vien sau 1 sinh vien nào đó
//4.	Xóa một sinh viên
//5.	Sửa một sinh viên
//6.    tim kiem 1 sinh vien
//7.	Ket thuc
int menu () {
    printf("============================\n");
    printf("1. tao danh sach sinh vien. \n");
    printf("2. hien thi danh sach sinh vien. \n");
    printf("3. chen them 1 sinh vien sau 1 sinh vien nao do. \n");
    printf("4. xoa 1 sinh vien. \n");
    printf("5. sua 1 sinh vien. \n");
    printf("6. tim kiem 1 sinh vien. \n");
    printf("0. ket thuc. \n");
    printf("============================\n");
    int chon;
    printf("\nmoi ban nhap vao lua chon. ");
    scanf("%d",&chon);
    return chon;
}
typedef struct {
    char HoTen[30];
    int tuoi;
    float DiemTB;
}sinhvien;

sinhvien *sv; //biến cục bộ
int n; //kích thước mảng

// tạo danh sách sinh viên
void InPut () {
    printf("nhap vao so sinh vien: ");
    scanf("%d",&n);
    sv = (sinhvien*)malloc(n*sizeof(sinhvien)); //cấp phát n sinh viên
    int i;
    printf("==========nhap thong tin sinh vien================\n");
    for (i=0; i<n; i++) {
        printf("nhap vao sinh vien thu %d\n",i+1);
        printf("nhap vao ho ten: ");
        fflush(stdin);
        gets((sv+i)->HoTen);
        printf("nhap vao tuoi sinh vien: ");
        scanf("%d",&(sv+i)->tuoi);
        printf("nhap vao diem trung binh: ");
        scanf("%f",&(sv+i)->DiemTB);
    }
}

// xuất danh sách sinh viên
void OutPut () {
    printf("DANH SACH SINH VIEN\n");
    printf("%-30s %-30s %-30s %-30s\n","STT", "Ho Ten", "Tuoi", "Diem TB");
    int i;
    for (i=0; i<n; i++) {
        printf("%-30d %-30s %-30d %-30.2f\n",i+1, (sv+i)->HoTen, (sv+i)->tuoi, (sv+i)->DiemTB);
    }

}
// chèn 1 sinh viên sau 1 sinh viên
void ChenSV () {
    sinhvien sv1, svm; //cần chèn sinh viên mới sau 1 sinh viên bất kì
    printf("can nhap sau sinh vien co ten la: ");
    fflush(stdin);
    gets(sv1.HoTen); //nhập tên sinh viên để lấy vị trí cần chèn sau
    int i, vitri, check=0; // lấy vị trí và kiểm tra xem sinh viên đó có ở trong ds k?
    for (i=0; i<n; i++) {
        if (strcmp(sv1.HoTen, sv[i].HoTen) == 0) {
            vitri = i; //lấy vị trí
            check = 1;
            break;
        }
    }
    if (check == 0) {
        printf("\nkhong tim thay sinh vien.");
    }
    printf("===================nhap vao thong tin sinh vien moi: \n");
    printf("nhap vao ho ten: ");
    fflush(stdin);
    gets(svm.HoTen);
    printf("nhap vao tuoi: ");
    scanf("%d",&svm.tuoi);
    printf("nhap vao diem trung binh: ");
    scanf("%f",&svm.DiemTB);
    n = n +1;
    for (i=n-1; i>vitri; i--) {
        sv[i] = sv[i-1];
    }
    sv[vitri+1] = svm;
}
int main()
{
    int chon;
    char key;
    do {
        chon = menu();
        switch (chon) {
            case 1: {
                InPut();
            }break;
            case 2: {
                OutPut();
            }break;
            case 3: {
                ChenSV();
            }break;
            case 4: {

            }break;
            case 5: {

            }break;
            case 6: {

            }break;
        }
        printf("ban co muon nhap them lua chon hay khong? (an 'c' de tiep tuc) ");
        scanf("%c",&key);
        key = getchar();
    }while (key=='c');

    return 0;
}
