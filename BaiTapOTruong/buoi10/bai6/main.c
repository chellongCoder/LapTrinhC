#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Câu 6. Viết chương trình tạo một danh sách liên kết thuận để ghi danh sách các sinh viên có cấu trúc gồm các thành phần: Ho_ten, Tuoi, Diem TB.
- In danh sách ra màn hình theo dạng:
DANH SACH SINH VIEN
STT Ho ten Tuoi Diem TB
- Chèn thêm một sinh viên (có tên nhập vào từ bàn phím) vào sau một sinh viên nào đó (có tên nhập vào từ bàn phím) rồi in danh sách theo dạng trên
- Xóa một sinh viên nào đó (có tên nhập từ bàn phím) ra khỏi danh sách rồi in danh sách theo dạng trên.
*/
typedef struct {
    char HoTen[30];
    int Tuoi;
    float DiemTB;
}sinhvien;

typedef struct list{
    sinhvien sv;
    struct list *next;
}node;

node *p;
node *head=NULL;
node *tail=NULL;

void TaoNode (sinhvien sv) {
    p = (node*)malloc(sizeof(node));
    if (p==NULL) {
        printf("khong cap phat dc\n!");
        exit(0);
    }
    else {
        p->next = NULL;
        p->sv = sv;
    }
}
void AddHead () {
    if (head==NULL) {
        head=tail=p;
    }
    else {
        p->next = head;
        head = p;
    }
}
void AddTail () {
    if (head==NULL) {
        head=tail=p;
    }
    else {
        tail->next = p;
        tail = p;
    }
}
sinhvien NhapThongTin () {
    sinhvien sv;
    printf("nhap vao ho ten: ");
    fflush(stdin);
    gets(sv.HoTen);
    printf("nhap vao tuoi: ");
    scanf("%d",&sv.Tuoi);
    printf("nhap vao diem trug binh: ");
    scanf("%f",&sv.DiemTB);
    return sv;
}
void input () {
    sinhvien sv;
    char chon;
    do {
        sv = NhapThongTin();
        TaoNode(sv);
        AddHead();
        printf("\nban co muon them sinh vien khong? (an 'c') de tiep tuc: ");
        scanf("%c",&chon);
        chon = getchar();
    }while(chon=='c');
}


void AddAfter () {
    char SinhVienBatKi[30];
    printf("=============nhap thong tin sinh vien can chen them:=========== \n");
    sinhvien sv = NhapThongTin();
    node *q;
    q = (node*)malloc(sizeof(node));
    q->sv = sv;
    q->next = NULL;
    if (head==NULL) { //danh sách rỗng
        head=tail=q;
    }
    else { //danh sách không rỗng
        if (head->next == NULL) {  // nếu danh sách chỉ có 1 nút
            tail->next = q;
            tail = q;
        }
        else {
            printf("nhap vao ten sinh vien bat ki: ");
            fflush(stdin);
            gets(SinhVienBatKi);
            p=head;
            while (p!=NULL) {
                if (strcmp(p->sv.HoTen, SinhVienBatKi) == 0) { //nếu phát hiện sinh viên đằng trc sinh viên cần chèn
                    q->next = p->next; //cho sinh viên cần chèn kết nối với sinh viên đằng sau
                    p->next = q; // sinh viên đằng trc kết nối với sinh viên cần chèn
                    break;
                }
                p = p->next;
            }
        }
    }
}
void DeleteNode () {
    char SinhVienCanXoa[30];
    printf("\nnhap vao ten sinh vien can xoa: ");
    fflush(stdin);
    gets(SinhVienCanXoa);
    //TH1: xóa đầu
    if (head==NULL) { //nếu danh rỗng
        printf("danh sach chua duoc khoi tao!");
        return;
    }
    else if (strcmp(head->sv.HoTen, SinhVienCanXoa) == 0) { //nếu phần tử đầu bằng pt cần xóa
        if (head->next!=NULL) { //nếu nó có node đằng sau
            head = head->next;//xóa node đó đi rồi node sau chuyển thành node đầu
        }
        else { //nếu nó chỉ có 1 node
            head = NULL; // rỗng luôn
        }
    }
    else if (strcmp(head->sv.HoTen, SinhVienCanXoa) != 0 && head->next ==  NULL) { //nếu ds có 1 node mà không phải node cần xóa
        printf("\nkhong tim thay sinh vien can xoa!");
    }
    node *q=head; //2 con trỏ để duyệt
    p=head->next; // cho p bằng tiếp ssau node head
    while (p!=NULL && strcmp(p->sv.HoTen, SinhVienCanXoa) != 0) { //khi tìm chưa hết và tìm chưa thấy
        q=p; //tiếp tục duyệt
        p=p->next;
    }
    if (p!=NULL) { //nếu nó không bằng rỗng,tức là chưa hết chuỗi
        q->next = p->next; //cho phần tử đằng trc nó bằng phần tử đằng sau nó
        free(p); //giải phóng node cần xóa
    }
    else {
        printf("\nkhong tim dc sinh vien vua nhap!");
    }
}
void output () {
    p = head;
    int i=0;
    printf("\n%-30s %-30s %-30s %-30s\n", "STT", "Ho Ten", "TUOI", "Diem trung binh");
    while (p!=NULL) {
        i++;
        printf("%-30d %-30s %-30d %-30.2f\n",i, p->sv.HoTen, p->sv.Tuoi, p->sv.DiemTB);
        p = p->next;
    }
}
int main()
{
    input();
    AddAfter();
    output();
    DeleteNode();
    output();
    return 0;
}
