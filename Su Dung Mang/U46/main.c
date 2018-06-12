#include <stdio.h>
#include <stdlib.h>
//viết chương trình hiển thị tên của bản theo mẫu Hello Mr: "your name". in trên cùng 1 dòng
int main()
{
    char myarray[10];
    printf("enter your name: ");
    scanf("%s",&myarray);
    printf("Hello Mr: %s",myarray);
    return 0;
}
