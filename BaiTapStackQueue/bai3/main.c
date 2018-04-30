#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <string.h>
typedef struct s {
    char a[MAX];
    int top;
} Stack;

void init (Stack *stack) {
    stack->top = -1;
}

int isEmpty (Stack *stack) {
    if (stack->top < 0) return 1;
    return 0;
}

int isFull (Stack *stack) {
    if (stack->top > MAX) return 1;
    return 0;
}

void push (Stack *stack, char x)  {
    if (isFull(stack)) {
        printf("danh sach da day!\n");
    } else {
        stack->top++;
        stack->a[stack->top] = x;
    }
}

char pop (Stack *stack) {
    if (isEmpty(stack)) {
        printf("danh sach rong!\n");
        return 0;
    } else {
       int x = stack->a[stack->top];
       stack->top--;
       return x;
    }
}

int kiemTraDoUuTienCuaPhepToan (char x) {
    if (x == '+' || x == '-') return 1;
    else if (x == '*' || x == '/') return 2;
    return 0;
}
void bieuThucHauTo (Stack *stackHauTo, char string2[], char string1[]) {
    int i,j=0;
    for (i=0; i<strlen(string1); i++) {
        if ((string1[i]>=0 && string1[i]<=9) || (string1[i]>='a' && string1[i]<='z')) {
            string2[j++] = string1[i];
        } else if (string1[i] == '(') {
            push(&stackHauTo,string1[i]);
        } else if (string1[i]==')') {
            while (pop(stackHauTo)!='(') {
                string2[j++] = pop(stackHauTo);
            }
        } else if (string1[i]=='+' || string1[i]=='-' || string1[i]=='*' ||string1[i]=='/') {
            if (isEmpty(stackHauTo) ||
                stackHauTo->top=='(' ||
                kiemTraDoUuTienCuaPhepToan(string1[i])>=kiemTraDoUuTienCuaPhepToan(pop(stackHauTo))) {
                    push(stackHauTo,string1[i]);
                }
        } else if(kiemTraDoUuTienCuaPhepToan(string1[i]) < kiemTraDoUuTienCuaPhepToan(pop(stackHauTo))) {
            char x = pop(stackHauTo);
            string2[j++] = x;
            push(stackHauTo,string1[i]);
        }
    }
    while (pop(stackHauTo)!='\0') {
        string2[j++] = pop(stackHauTo);
    }
}
int main()
{
    Stack stackHauTo;

    char string1[100],string2[100];
    printf("nhap 1 chuoi gom toan hang va bieu thuc so hoc: ");
    fflush(stdin);
    gets(string1);
    printf("%s", &string1);
    bieuThucHauTo(&stackHauTo,string2,string1);
    int i;
    for (i=0; i<strlen(string2); i++) {
        printf("%c", string2[i]);
    }
    return 0;
}
