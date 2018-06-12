#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//sử dụng link list để tạo 1 danh sách số nguyên từ 1 đến 100, in ra những số nguyên tố
typedef struct linklist {
    int data;
    struct linklist *next;
}node;

node *head=NULL, *tail=NULL, *p;

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
        printf("\nenter value of data: ");
        scanf("%d",&data);
        CreateNode(data);
        //AddHead();
        AddTail();
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
    while (p!=NULL) { //đọc từ đầu đến khi đến tail. tail lúc này bằng cái p lúc đầu tiên và bằng null
        printf("%4d",p->data);
        p=p->next;
    }
}

int KtSNT (int x) {
    int i;
    if (x<2) { //nếu x<2 thì sẽ không là số nguyên tố
        return 1;
    }
    for (i=2; i<x; i++) {
        if (x%i==0) { //nếu chia số đó từ 2 đến nhỏ hơn nó thì k là số nt
            return 1;
        }
    }
    return 0;
}

void InPut1 () {
    int data;
    int i=0;
    while (i<5) { //cần tạo 5 số
        data=rand()%50;
        CreateNode(data);
        AddTail();
        i++;
    }
}

void OutPut1 () {
    p=head;
    while (p!=NULL) { //khi chưa duyệt xong từ đầu đến cuối
        if (KtSNT(p->data)==0) { //kiểm tra số nt
            printf("%4d",p->data);
        }
        p=p->next; //chuyển sang số tiếp theo
    }
}
/*
int kt (int x) {
    int i;
    int count=0;
    for (i=1; i<x; i++) {
        if (x%i==0) {
            count++;
        }
    }
    if (count==2) {
        return count;
    }
}
*/
int main()
{
    srand(time(NULL));
    //InPut();

    InPut1();
    OutPut();
    printf("\n cac so nguyen to trong danh sach la: ");
    OutPut1();
    return 0;
}
