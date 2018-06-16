#include <stdio.h>
#include <stdlib.h>
int menu() {
    printf("================\n");
    printf("1. doi sang he 2\n");
    printf("2. doi sang he 8\n");
    printf("3. doi sang he 16\n");
    printf("4. ket thuc\n");
    printf("================\n");
    printf("chon> ");
    int choice;
    scanf("%d",&choice);
    return choice;
}

typedef struct Node {
    char data;
    struct Node *next;
}Node;

Node *first;
Node *last;
Node *p;
void init() {
    first =NULL;
    last= NULL;
}

int isEmpty() {
    if(first==NULL && last==NULL) {
        return 1;
    }
    return 0;
}

void insertFirst(char data) {
    p = (Node*)malloc(sizeof(Node));
    p->data =data;
    if(isEmpty()){
        first = last = p;
    } else {
        p->next = first;
        first = p;
    }
}

Node *removeFirst() {
    Node *node = NULL;
    if(!isEmpty()){
        if(first==last) { //danh sach co 1 nut
            node = first;
            first = last = NULL;
        } else { //danh sach co nhieu nut
            node = first;
            first = first->next;
            node->next = NULL;
        }
    }
    return node;
}

void printStack() {
    Node *p;
    int i=0;
    while(!isEmpty()){
    p = removeFirst(); //lay tudau stack ra
        if(p->data>=65) {
            printf("%d> %c\n", i++, p->data);
        } else {
            printf("%d> %d\n", i++ , p->data);
        }

    }
    init();
}

void convertToBinary(int n) {
    while(n>0) {
        char du = n%2;
        insertFirst(du);
        n =n/2;
    }
    printStack();
}

void convertToOctal(int n) {
   while(n>0) {
        char du = n%8;
        insertFirst(du);
        n =n/8;
    }
    printStack();
}

void convertToHecximal(int n) {
   while(n>0) {
        char du = n%16;
        switch(du) {
            case 10: du = 'A';break;
            case 11: du = 'B';break;
            case 12: du = 'C';break;
            case 13: du = 'D';break;
            case 14: du = 'E';break;
            case 15: du = 'F';break;
        }
        insertFirst(du);
        n =n/16;
    }
    printStack();
}
int main()
{
    int num;
    printf("nhap vao 1so> ");
    scanf("%d", &num);
    init();
    int choice;
    do {
        choice = menu();
        switch(choice) {
            case 1: convertToBinary(num); break;
            case 2: convertToOctal(num); break;
            case 3: convertToHecximal(num); break;
            case 4: exit(0);
        }
    }while(1);
    return 0;
}
