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
char menu () {
    printf("======================\n");
    printf("tao danh sach sinh vien.\n");
    printf("hien thi danh sach sinh vien.\n");
    printf("chen them  1 sinh vien.\n");
    printf("xoa mot sinh vien.\n");
    printf("sua 1 sinh vien.\n");
    printf("========================\n");
    printf("ban chon lenh nao? ");
    char key = getche();
    return key;
}
typedef struct sinhvien{
    char hoten[30];
    int tuoi;
    float diemtb;
    struct sinhvien *next;
}sinhvien;

sinhvien *first=NULL;
sinhvien *last=NULL;

void tao_danh_sach() {
    sinhvien *sv;
    while (1) {
            //cấp phát 1 sinh viên
        sv = (sinhvien*)malloc(sizeof(sinhvien));
        printf("\n===========nhap thong tin sinh vien=========\n");
        printf("ho va ten: ");
        fflush(stdin);
        gets(sv->hoten);
        printf("tuoi: ");
        scanf("%d",&sv->tuoi);
        printf("diem tb: ");
        scanf("%f",&sv->diemtb);
        sv->next = NULL;
        //thêm sinh viên vào cuối danh sách
        if (first==NULL) {
            first = sv;
            last = sv;
        }
        else {
            last->next = sv;
            last = sv;
        }
        printf("da them 1 sinh vien vao danh sach\n");
        printf("ban co muon them sinh vien nua khong? ");
        char chon;
        fflush(stdin);
        scanf("%c",&chon);
        if (chon=='k' || chon=='K') {
            break;
        }
    }
}
void in_danh_sach() {
    sinhvien *sv=first;
    int i=1;
    printf("\n%-10s %-10s %-10s %-10s\n","stt","ho ten", "tuoi", "diem tb");
    while (sv!=NULL) {
        printf("%-10d %-10s %-10d %-10.2f\n",i,sv->hoten, sv->tuoi, sv->diemtb);
        sv=sv->next;
    }
}

sinhvien *tim_sinh_vien (char hoten[]) {
    sinhvien *sv = first;
    while (strcmp(hoten, sv->hoten)!=0 && sv!=NULL) {
        sv=sv->next;
    }
    return sv;
}
sinhvien *tim_sinh_vien_truoc(sinhvien *sv) {
    sinhvien *pre;
    if (sv == first) {
        return NULL;
    }
    pre = first;
    while (pre->next!= sv) {
        pre = pre->next;
    }
    return pre;
}
void chen_sinh_vien() {
    //hỏi cần chèn trước sinh viên nào?
    char hoten[30];
    printf("\nban muon chen truoc sinh vien nao: ");
    fflush(stdin);
    gets(hoten);
    sinhvien *sv = tim_sinh_vien(hoten);
    if (sv==NULL) {
        printf("khong tim thay sinh vien %s.\n", hoten);
        return;
    }
    //tìm sinh viên đứng trước sinh viên cần chèn
    sinhvien *pre = tim_sinh_vien_truoc(sv);
    sinhvien *svm;
    svm = (sinhvien*)malloc(sizeof(sinhvien));
    printf("Hay nhap thong tin cho SV can them vao:\n");
    printf("Ho va ten: ");
    fflush(stdin);
    gets(svm->hoten);
    printf("Tuoi: ");
    scanf("%d", &svm->tuoi);
    printf("Diem TB: ");
    scanf("%f", &svm->diemtb);

    //chèn
    if (pre==NULL){
        svm->next = first;
        first=sv;
        printf("da chen xong sinh vien\n");
    }
    else {
        svm->next=sv;
        pre->next=svm;
        printf("da chen xong sinh vien\n");
    }
}
void xoa_sinh_vien() {
    char hoten[30];
    printf("\nnhap vao ten sinh vien can xoa: ");
    fflush(stdin);
    gets(hoten);
    sinhvien *sv = tim_sinh_vien(hoten);
    if (sv == NULL) {
        printf("khong tim thay sinh vien %s",hoten);
        return;
    }
    sinhvien *pre = tim_sinh_vien_truoc(sv);
    if (pre==NULL) {
        first = first->next;
    }
    else {
        pre->next = sv->next;
    }
}
void sua_sinh_vien () {
}
int main()
{
    char key;
    do {
        key = menu();
        switch (key) {
            case '1': tao_danh_sach(); break;
            case '2': in_danh_sach(); break;
            case '3': chen_sinh_vien(); break;
            case '4': xoa_sinh_vien(); break;
            case '5': sua_sinh_vien(); break;
            default: printf("\nban chon khong dung lenh, moi ban nhap lai!\n");
        }
        printf("\nban co muon tiep tuc chuong trinh khong? (an ENTER de tiep tuc, an ESC de ket thuc)\n");
        key = getche();
    }while (key!=27);
    return 0;
}
