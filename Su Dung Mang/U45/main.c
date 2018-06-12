#include <stdio.h>
#include <stdlib.h>
//có 1 mảng gồm các số sau [-99,45,100,37,89,-327,245]. viết chương trình tìm số lớn nhất trong mảng
int main()
{
    int myarray[7]={-99,45,100,37,89,-327,245};
    int max=0;
    int i;
    for (i=0; i<7; i++) {
        if (myarray[max]<myarray[i]) {
            max=i;
        }
    }
    printf("the biggest integer in myarray is %d",myarray[max]);
    return 0;
}
