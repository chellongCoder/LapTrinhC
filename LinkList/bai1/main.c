#include <stdio.h>
#include <stdlib.h>
//sử dụng danh sách liên kết để tạo 1 danh sách số nguyên
//khai báo
typedef struct SoNguyen {
    int data;
    struct SoNguyen *next;
}node;
node *head=NULL; //con trỏ đầu
node *tail=NULL; // con trỏ cuối
node *p; // con trỏ trung gian
//tạo node
void CreateNode(int data) {
    p=(node*)malloc(sizeof(node));
    if (p==NULL) {
        printf("\nkhong cap phap dc bo nho");
        exit(0);
    }
    else {
        p->data=data; // dữ liệu của node p = data
        p->next=NULL; // con trỏ của node p trỏ đến null
    }
}
//thêm phần tử vào đầu
void AddHead () {
    if (head==NULL) { //hiện tại head chưa có địa chỉ
        head=tail=p; // lúc này đã có địa chỉ là node p (vì p đã đc cấp phát)
    }
    else {
        p->next=head; //(p->next chứa địa chỉ của các p cũ)
        head=p; // đây là 1 cái p mới
    }
}
//thêm phần tử vào cuối
void AddTail () {
    if (head==NULL) {
        head=tail=p;
    }
    else {
        tail->next=p; //(p->next chứa địa chỉ của các p cũ)
        tail=p;//đây là 1 cái p mới
    }
}
//nhập dữ liệu
void InPut () {
    int data;
    char count;
    while (1) {
        printf("\nnhap vao data: ");
        scanf("%d",&data);
        CreateNode(data);
        AddTail();
        //AddHead();
        printf("\nco muon nhap tiep khong? ");
        scanf("%d",&count);
        count=getchar();
        if (count=='k' || count=='K') {
            break;
        }
    }
}
// xuât dữ liệu
void output () {
    p=head;
    while (p!=NULL) { //đọc từ đầu đến khi đến tail. tail lúc này bằng cái p lúc đầu tiên và bằng null
        printf("%4d",p->data);
        p=p->next;
    }
}
int main()
{
    InPut();
    output ();
    return 0;
}
