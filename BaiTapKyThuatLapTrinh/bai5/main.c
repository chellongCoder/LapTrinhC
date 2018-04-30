#include <stdio.h>
#include <stdlib.h>
#define max 100
//Câu 5:
//
//1. Chon 1 de Nhap so nguyen duong (he 10)
//2. Chon 2 de Chuyen so vua nhap sang he 2
//3. Chon 3 de Chuyen so vua nhap sang he 8
//4. Chon 4 de ket thuc
//Chon:
int menu () {
    printf("\n============================\n");
    printf("1. nhap so nguyen duong\n");
    printf("2. chuyen sang he 2\n");
    printf("3. chuyen sang he 8\n");
    printf("4. ket thuc\n");
    printf("============================\n");
    printf("moi ban chon:> ");
    int choice;
    scanf("%d", &choice);
    return choice;
}

typedef struct Stack {
    char vars[max];
    int top;
}Stack;

void initStack(Stack *stack) {
    stack->top = -1; //stack rỗng
}

int isEmpty(Stack *stack) {
    if(stack->top==-1) return 1;
    return 0;
}

int isFull(Stack *stack) {
    if(stack->top==max) return 1;
    return 0;
}

void push(Stack *stack, char x) {
    if(isFull(stack)) {
        printf("full error!!!");
    } else {
        stack->top++;
        stack->vars[stack->top] = x;
    }
}

char pop(Stack *stack) {
    if(isEmpty(stack)) {
        printf("empty error");
    } else {
        int x = stack->vars[stack->top];
        stack->top--;
        return x;
    }
    return -1;
}

void nhapSoNguyen(int *num) {
    printf("nhap 1 so nguyen duong: ");
    scanf("%d", num);
}

void chuyenSangHe2(Stack *stack, int num) {
    printf("chuyen %d sang he 2: ", num);
    while(num!=0) {
        push(stack, (num%2));
        (num)/=2;
    }

    while(!isEmpty(stack)) {
        printf("%d", pop(stack));
    }

    stack->top=-1;
}

void chuyenSangHe8(Stack *stack, int num) {
    printf("chuyen %d sang he 8: ", num);
    while(num!=0) {
        push(stack, (num%8));
        (num)/=8;
    }

    while(!isEmpty(stack)) {
        printf("%d", pop(stack));
    }

    stack->top = -1;
}

void ketThuc() {
    exit(0);
}

int main()
{
    int num;
    Stack stack;
    initStack(&stack);
    int choice;
    do {
        choice = menu();
        switch(choice) {
            case 1: nhapSoNguyen(&num); break;
            case 2: chuyenSangHe2(&stack, num); break;
            case 3: chuyenSangHe8(&stack, num); break;
            case 4: ketThuc(); break;
        }
    }while(1);
    return 0;
}
