#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//tạo 1 mảng sinh viên thông tin gồm có mã sv, tên, điểm
typedef struct {
    char name[30];
    int MSV;
    float point;
}sinhvien;

void TaoDanhSach(sinhvien a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("\nenter student's name: ");
        fflush(stdin);
        gets(a[i].name);
        printf("\nenter student's id: ");
        scanf("%d",&a[i].MSV);
        printf("\nenter student's point: ");
        a[i].point=10.100*rand()/RAND_MAX;
        printf("%0.2f\n",a[i].point);
    }
}
void inDanhSach (sinhvien a[], int n) {
    int i;
    printf("%-20s %-30s %-20s %-20s\n","STT","HO TEN","MSV","DIEM");
    for (i=0; i<n; i++) {
        printf("%-20d %-30s %-20d %-20.2f\n",i+1,a[i].name, a[i].MSV, a[i].point);
        Sleep(1000);
    }
}
int main()
{
    srand(time(NULL));
    sinhvien a[10];
    int n;
    printf("enter number of students: ");
    scanf("%d",&n);
    TaoDanhSach(a,n);
    inDanhSach(a,n);
    return 0;
}
