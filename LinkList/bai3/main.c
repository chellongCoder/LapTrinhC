#include <stdio.h>
#include <stdlib.h>
//tạo 1 danh sách liên kết, tìm kích thước của danh sách, tìm kiếm trong danh sách, xóa đầu, xóa đuôi danh sách
typedef struct list {
    int data;
    struct list *next;
}node;

node *head=NULL;
node *tail=NULL;
node *p;

void CreateNode (int data) {
    p=(node*)malloc(sizeof(node));
    if (p==NULL) {
        printf("khong cap phat dc bo nho\n");
        exit(0);
    }
    else {
        p->data=data;
        p->next=NULL;
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

void Addtail () {
    if (head==NULL) {
        head=tail=p;
    }
    else {
        tail->next=p;
        tail=p;
    }
}

void InPut () {
    int data;
    char chon;
    while (1) {
        printf("\ninput value of data: ");
        scanf("%d", &data);
        CreateNode(data);
        Addtail();
        printf("\nco muon nhap nua khong? ");
        scanf("%c",&chon);
        chon=getchar();
        if (chon=='k') {
            break;
        }
    }
}

void OutPut () {
    for (p=head; p!=NULL; p=p->next) { //tương đương kiểu for (i=0; i<n; i++)
        printf("%4d",p->data);
    }
}

void SizeOfList () {
    int size=0;
    if (head==NULL) {
        printf("size of linklist = %d",size);
    }
    else {
        for (p=head; p!=NULL; p=p->next) {
            size++;
        }
        printf("\nsize=%d",size);
    }
}

void search () {
    int x;
    printf("\nenter value of x: ");
    scanf("%d",&x);
    int position=0; //vị trí đầu đẻ duyệt ds
    if (head==NULL) { //nếu ds không tồn tại
        printf("linklist is NULL\n");
        exit(0);
    }
    else {
        for (p=head; p!=NULL; p=p->next) { //duyệt
            position++;
            if (p->data==x) {
                printf("\ntim thay phan tu %d o vi tri %d",p->data,position);
            }
        }
    }
}

void XoaDau() //Xóa phần tử đầu tiên của danh sách
{
    if (head==NULL) { //nếu danh sách rỗng
        printf("danh sach rong\n");
        exit(0); //thoát mẹ luôn
    }
    else if (head==tail==p) { //nếu chỉ có mỗi 1 cái node
        head==NULL;
    }
    else { //còn lại nếu có nhiều node
        head = head->next; //cho nó bằng phần tử tiếp theo
    }
}

void XoaDuoi() //Xóa phần tử đầu tiên của danh sách
{
    p=head;
    if (head==NULL) { //nếu danh sách rỗng
        printf("danh sach rong\n");
        exit(0); //thoát mẹ luôn
    }
    else if (head==tail==p) { //nếu chỉ có mỗi 1 cái node
        head==NULL;
    }
    else { //còn lại nếu có nhiều node
        while (p->next!=tail) { //duyệt đến cuối break ra nếu phần tử tiếp theo là phần tử cuối cùng
            p = p->next; //duyệt tiếp
        }
        p->next = NULL; //cho cái đuôi bằng null
        tail = p; //lúc này cái đuôi là nút cận cuối
    }
}
int main()
{
    InPut();
    int x;
    XoaDau();
    XoaDuoi();
    OutPut();


    SizeOfList();
    search();

    return 0;
}
