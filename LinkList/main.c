#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int MSV;
    char HoTen[30];
    float DiemTb;
}sv;

typedef struct Node {
    sv info;
    struct  Node *next;
}node;

node *head = NULL;
node *tail = NULL;
//tạo 1 nút

node *createdNewNode (sv x) {
    node *p = (node*)malloc(sizeof(node));
    if (p==NULL) { //nếu k cấp phát đc
        return NULL;
    } else {
        p->info = x;
        p->next = NULL;
        return p;
    }
}

//thêm đầu
void insertFist ( node *p) {
    if(head == NULL) {
        head = p;
    } else {
        p->next = head;
        head = p;
    }
}
void insertLast ( node *p) {
    if(head == NULL) {
        head = tail = p;
    } else {
        tail->next = p;
        tail = p;
    }
}
sv nhapThongTin () {
    sv sinhvien;
    printf("nhap thong tin sv: ===============>\n");
    printf("nhap ho ten: ");
    fflush(stdin);
    gets(sinhvien.HoTen);
    printf("nhap vao ma so sinh vien: ");
    scanf("%d", &sinhvien.MSV);
    printf("nhao vao diem tb: ");
    scanf("%f",&sinhvien.DiemTb);
    return sinhvien;
}

void createdLink () {

    while (1) {
        sv sinhvien = nhapThongTin();
        node *p = createdNewNode(sinhvien);
       // insertFist(p);
        insertLast(p);
        printf("ban da them 1 sinhvien vao dau danh sach!\n");
        printf("ban co muon them sinh vien nua k?");
        char key;
        fflush(stdin);
        scanf("%c" , &key);
        if(key=='k' || key=='K') {
            break;
        }
    }
}

void printfLink () {
    node *sinhvien = head;
     printf("\n%-10s %-10s %-10s\n","ho ten", "MSV", "diem tb");
     while (sinhvien!=NULL) {
        printf("%-10s %-10d %-10.2f\n",sinhvien->info.HoTen, sinhvien->info.MSV, sinhvien->info.DiemTb);
        sinhvien = sinhvien->next;
     }

}
int main()
{
    createdLink();
    printfLink();
    return 0;
}
