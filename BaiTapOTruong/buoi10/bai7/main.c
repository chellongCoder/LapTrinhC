#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Câu 7. Viết chƣơng trình tạo một danh sách liên kết ngƣợc để ghi danh sách các sinh viên có cấu trúc gồm các thành phần: Ho_ten, Tuoi, Diem TB.
- In danh sách ra màn hình theo dạng:
DANH SACH SINH VIEN
STT Ho ten Tuoi Diem TB
. . . . . .
- Chèn thêm một sinh viên (có tên nhập vào từ bàn phím) vào trƣớc một sinh viên nào đó (có tên nhập vào từ bàn phím) rồi in danh sách theo dạng trên.
- Xóa một sinh viên nào đó (có tên nhập từ bàn phím) ra khỏi danh sách rồi in danh sách theo dạng trên.
*/
typedef struct {
    char HoTen[30];
    int Tuoi;
    float DiemTB;
}sinhvien;
typedef struct list {
    sinhvien sv;
    struct list *next;
}node;

node *p;
node *head = NULL, *tail = NULL;

sinhvien NhapThongTin () {
    sinhvien sv;
    printf("nhap ten sinh vien: ");
    fflush(stdin);
    gets(sv.HoTen);
    printf("nhap vao tuoi sinh vien: ");
    scanf("%d",&sv.Tuoi);
    printf("nhap vao diem tb: ");
    scanf("%f",&sv.DiemTB);
    return sv;
}

void TaoNode (sinhvien sv) {
    p = (node*)malloc(sizeof(node));
    if (p==NULL) {
        printf("khong cap phat duoc!");
        return;
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
        p->next=head;
        head=p;
    }
}
void AddTail () {
    if (head==NULL) {
        head=tail=p;
    }
    else{
        tail->next=p;
        tail=p;
    }
}

void input () {
    char chon;
    sinhvien sv;
    do {
        sv=NhapThongTin();
        TaoNode(sv);
        AddTail();
        printf("\nban co muon nhap them sinh vien khong? (an 'c' de tiep tuc)");
        scanf("%c",&chon);
        chon=getchar();
    }while (chon=='c');
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
void AddPrevious () {
    char SinhVienBatKi[30];
    printf("=============nhap thong tin sinh vien can chen them:=========== \n");
    sinhvien sv = NhapThongTin();
    if (head==NULL) { //danh sách rỗng
        head=tail=p;
    }
    else { //danh sách không rỗng
        node *add, *q;
        add = (node*)malloc(sizeof(node));
        add->sv = sv;
        add->next = NULL;
        if (head->next == NULL) {  // nếu danh sách chỉ có 1 nút
            add->next = head;
            head = add;
        }
        else {
            printf("nhap vao ten sinh vien bat ki: ");
            fflush(stdin);
            gets(SinhVienBatKi);
            p=head;
            while (p!=NULL) {
                q=p->next;
                if (strcmp(q->sv.HoTen, SinhVienBatKi) == 0) {
                    add->next = q;
                    p->next = add;
                    break;
                }
                p = p->next;
            }
        }
    }
}
int main()
{
    input();
    output();
    AddPrevious();
    output();
    return 0;
}
