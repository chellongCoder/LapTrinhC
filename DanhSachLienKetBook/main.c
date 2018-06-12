#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book {
    char nameBook[30];
    char author[30];
    struct {
        int day,thang,nam;
    }TGXuatBan;
    int GiaTien;
    struct book *pNext;
}BOOK; // khai báo 1 cấu trúc các quyển sách

int main ()
{
    char tt;
    BOOK *pHead, *pTail, *p;
    #define T (*p).TGXuatBan
    pHead=NULL;
    do {
       p=(BOOK*)malloc(sizeof(BOOK));
       printf("Name of Books: ");
       fflush(stdin);
       gets(p->nameBook);
       printf("author of Books: ");
       fflush(stdin);
       gets(p->author);
       printf("ngay xuat ban: ");
       scanf("%d%d%d",&T.day, &T.thang, &T.nam);
       printf("gia tien: ");
       scanf("%d",&p->GiaTien);
       if (pHead==NULL) {
            pHead=pTail=p;
            p->pNext=NULL;
       }
       else {
            pTail->pNext=p;
            pTail=p;
            p->pNext=NULL;
       }
       printf("nhap tiep an phim bat ki, thoat an ESC\n ");
       tt=getch();
    }while(tt!=27);
    printf("\ndanh sach nhu sau:\n");
    p=pHead;
    printf("%-30s %-20s %-17s %-15s\n","nameBook", "author", "NgayXB", "GiaTien");
    while (p!=NULL) {
        printf("%-30s %-20s %d/%d/%-15d %-15d\n",p->nameBook, p->author, T.day, T.thang, T.nam, p->GiaTien);
        p=p->pNext;
    }
    getch();
    return 0;
}
