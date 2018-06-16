#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[30];
    int  age;
    float score;
}sinhvien;

typedef struct Node
{
    sinhvien data;
    struct Node *pNext;
}NODE;

typedef struct List
{
    NODE *pHead;
    NODE *pTail;
}LIST;

void Init(LIST *l)
{
    l->pHead = l->pTail = NULL;
}

NODE* GetNODE(sinhvien x)
{
    NODE *p = (NODE*)malloc(sizeof(NODE));
    if (p == NULL)
    {
        printf("\nBo nho khong du");
        return NULL;
    }
    p->data=x;
    p->pNext=NULL;
    return p;
}

void addHead( LIST *l, NODE *p)
{
    if (l->pHead == NULL) //rong
    {
        l->pHead = l->pTail = p;
    }
    else
    {
        p->pNext = l->pHead;
        l->pHead = p;
    }
}

void Nhapdata(sinhvien x)
{

    gets();
    printf("\nHo ten: ");
    gets(x.name);
    printf("Tuoi: ");
    scanf("%d",&x.age);
    gets();
    printf("Diem: ");
    scanf("&f",&x.score);

}

//void Xuatdada(sinhvien x, int i)
//{
//    printf("\n|%3d|%30s|%3d|%2.1f|",i+1,x.name,x.age,x.score);
//}

void input (LIST *l)
{
    int n;
    printf("\nNhap so luong sinh vien : ");
    scanf("%d",&n);
    Init(l);
    for(int i=0;i<n;i++)
    {
        sinhvien x;
        printf("\nNhap vao thong tin sinh vien %d: ",i+1);
        Nhapdata(x);
        NODE *p = GetNODE(x);
        addHead(l,p);
    }
}

void output(LIST *l)
{
    int i=0;
//    for (NODE *p = l.pHead; p != NULL; p ->pNext)
//    {
//        Xuatdada( p->data,i);
//        i++;
//    }
    NODE *p = l->pHead;
    printf("asdasdas");
    while(p!=NULL)
	{
		printf("\n|%3d|%30s|%3d|%2.1f|",i+1,p->data.name,p->data.age,p->data.score);
		i++;
		p = p->pNext;
	}
}

int main()
{
    LIST l;
    input(&l);
    output(&l);
    return 0;
}
