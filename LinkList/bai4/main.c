#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// tạo 1 danh sách, cập nhật 1 phần tử trong danh sách và xóa 1 phần tử trong danh sách, thêm đầu, thêm đuôi
typedef struct list {
    int data;
    struct list *next;
}node;

node *head = NULL;
node *tail = NULL;
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
        p->next=head; //p->next chứa địa chỉ của cái node trc nó
        head=p;
    }
}

void AddTail () {
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
        printf("\nnhap vao data: ");
        scanf("%d",&data);
        CreateNode(data);
        AddHead();
        printf("\nco muon nhap nua khong? ");
        scanf("%c",&chon);
        chon=getchar();
        if (chon=='k') {
            break;
        }
    }
}

void OutPut () {
    p=head;
    printf("[head] =>");
    while (p!=NULL) {
        printf("%4d =>",p->data);
        p=p->next;
    }
    printf("    [NULL]");
}

void UpdateData () {
    int data;
    printf("\ninput element need updating: ");
    scanf("%d",&data);
    int x;
    printf("\ninput updating data: ");
    scanf("%d",&x);
    p=head;
    int pos=0;
    while (p!=NULL) {
        if (p->data==data) {
            p->data=x;
            printf("\n==========updating");
            int i=0;
            while (i<1) {
                Sleep(500);
                printf(" . ");
                Sleep(500);
                printf(" . ");
                Sleep(500);
                printf(" . ");
                Sleep(500);
                system("cls");
                i++;
            }
            printf("============\n");
            printf("\ntim thay phan tu %d o vi tri %d dc thay the bang phan tu %d\n",data,pos,x);
            return;
        }
        p=p->next;
        pos++;
    }
    printf("\nkhong tim thay phan tu %d\n",data);
    return;
}

void DeleteNode () {
    int data;
    printf("\ninput element need deleting: ");
    scanf("%d",&data);
    // phải chia ra 2 trường hợp là detele phần tử đầu và delete các phần tử ở các vị trí khác
    //TH1: phần tử cần xóa ở đầu
    if (head==NULL) { //nếu mà nó đéo có gì hết
        printf("\ndanh sach lien ket chua dc khoi tao");
        return;
    }
    if (head->data==data) { //nếu mà cái phần tử đầu nó bằng cái cần xóa vừa nhập vào
        if (head->next!=NULL) { //nếu cái *next của nó chứa phần tử tiếp theo (tức là ds k bị rỗng)
            head=head->next; //thì cái đầu sẽ chuyển sang cái phần tử tiếp theo
            return;
        }
        else {
            head=NULL;
            return;
        }
    }
    else if (head->data!=data && head->next==NULL) { //hình dung là danh sách có mỗi một phần tử while ([không phải phần tử] && [không có phần tử sau])
        printf("\nkhong tim thay phan tu %d can xoa",data);
    }
    //TH2: phần tử cần xóa ở các vị trí khác
    node *q=head; // cho 1 cái Q gán bằng đầu
    p=head->next; // cho cái p bằng cái tiếp theo
    while (p!=NULL && p->data!=data) { //while([tìm chưa hết] && [tìm chưa thấy])
        q=p; //tiếp tục duyệt
        p=p->next;
    } //tim thay thi thi se break khoi vong lap
    if (p!=NULL) { //A! tìm thấy rồi , nếu nó không bằng rỗng
        q->next=p->next; // nối cái đằng sau p với cái đằng trc p để tạo 1 list mới
        free(p); //giải phóng thằng p để nó biến mất
    }
}
void insert_first (int data) {
    CreateNode(data);
    AddHead();
}
void insert_last (int data) {
    CreateNode(data);
    AddTail();
}
int main()
{
    InPut();
    printf("\n==========output==============");
    OutPut();
    UpdateData();
    Sleep(500);

    OutPut();
    DeleteNode();
    printf("\ndeleted node suscessfully!\n");
    OutPut();
    int PhanTuDau,PhanTuCuoi;
    printf("\nnhap vao phan tu can them vao dau: ");
    scanf("%d",&PhanTuDau);
    printf("nhap vao phan tu can them vao cuoi: ");
    scanf("%d",&PhanTuCuoi);
    insert_first(PhanTuDau);
    insert_last(PhanTuCuoi);
    OutPut();
    return 0;
}
