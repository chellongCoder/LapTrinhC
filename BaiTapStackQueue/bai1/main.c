#include <stdio.h>
#include <stdlib.h>
#define MAX 100


typedef struct S{
    char a[MAX];
    int top;
}Stack;

void init (Stack *stack) { //khởi tạo danh sách
    stack->top = -1;
}

int isEmpty (Stack *stack) { //nếu top không có gì
    if (stack->top <0) return 1;
    return 0;
}

int isFull (Stack *stack) {
    if (stack->top == MAX) return 1;
    return 0;
}

void push (Stack *stack, char x) { //đẩy kí tự kiểu số vào mảng char
    if (isFull(stack)) {
        printf("khong the them!\n");
    } else {
        stack->top++;
        stack->a[stack->top] = x;

    }
}

char pop (Stack *stack) {
    if(isEmpty(stack)) {
        printf("danh sach rong!\n");
        return 0;
    }
    int x = stack->a[stack->top];
    stack->top--;
    return x;
}
int main()
{
    Stack stack;
    int n,b;
    init(&stack);
    printf("nhap vao so: ");
    scanf("%d",&n);
    printf("nhap vao he so: ");
    scanf("%d", &b);
    while (n!=0) { //chia dư
        printf("n = %d\n", n);
        push(&stack, n%b);
        n=n/b;
    }
    while (!isEmpty(&stack)) {
        printf("%x", pop(&stack));
        //if (pop(&stack)>=10) {
          //  printf("%x",pop(&stack));
        //}
    }
    return 0;
}
