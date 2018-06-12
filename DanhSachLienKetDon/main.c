#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//1. khai báo cấu trúc dữ liệu danh sách liên kết đơn các số nguyên
struct node { // khai báo kiểu cấu trúc node gồm có dữ liệu (data) và con trỏ pNext
    int data;
    struct node *pNext;
};
typedef struct node NODE; //gán kiểu cấu trúc NODE
struct list { // khai báo danh sách 2 con trỏ cấu trúc pHead và pTail
    NODE *pHead;
    NODE *pTail;
};
typedef struct list LIST; //gán kiểu cấu trúc LISH

// 2. khởi tạo danh sách liên kết đơn
void Init (LIST *l) { // truyền tham chiếu vào 2 đầu xâu
    l->pHead=l->pTail=NULL;
}

//3. tạo NODE trong danh sách
NODE *GetNODE (int x) { //x chính là data sẽ đưa vào
    NODE *p=(NODE*)malloc(sizeof(NODE));
    if (p==NULL) {
        return NULL;
    }
    p->data=x; // x gán vào trong data trong kiểu cấu trúc NODE
    p->pNext=NULL; // pNext trỏ tới 1 vùng nhớ trống
    return p; //trả về con trỏ p
}
//4. thêm NODE vào đầu danh sách
void AddHead (LIST *l, NODE *p) {
    if (l->pHead == NULL) {
        l->pHead = l->pTail = p; // lúc này pHead đang mang các giá trị trong cấu trúc p
    }
    else {
        p->pNext = l->pHead; //kết nối với vị trí đầu tiên của ds
        l->pHead=p; // lúc này pHead đang là p
    }
}
//5. thêm NODE vào cuối danh sách
void Addtail (LIST *l, NODE *p) {
    if (l->pHead == NULL) {
        l->pHead = l->pTail = p; // lúc này pHead đang mang các giá trị trong cấu trúc p
    }
    else {
        l->pTail = p->pNext;
        l->pTail=NULL;
    }
}
void input (LIST*l) {
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    Init(&l);
    int i;
    int x;
    for (i=1; i<=n; i++) {
        printf("nhap vao data: ");
        scanf("%d",&x);
        NODE *p=GetNODE(x); // truyền gía trị data vào p->data
        if (p!=NULL) {
             AddHead(&l,&p); // nhập vào đầu danh sách, cứ mỗi vòng lặp lại tạo ra 1 NODE mới ở đầu danh sách được con trỏ pNext liên kết với NODE trước đó
        }
    }
}
void output (LIST *l) {
    NODE *p;
    p= l->pHead;
    while (p!=NULL) {
        printf("%4d",p->data);
        p=p->pNext;
    }
}
int main()
{
    LIST l;
    int x;
    input(&l);
    output(&l);
    return 0;
}
