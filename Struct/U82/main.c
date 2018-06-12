#include <stdio.h>
#include <stdlib.h>
/*
Viết chương trình cho phép người dùng nhập thông tin học sinh gồm :
họ tên học sinh;
mã số học sinh;
lớp;
điểm môn Toán,lý, hoá;
Sau khi nhập xong chương trình sẽ hỏi" bạn có muốn nhập nữa hay không".
Nếu trả lời "Có" chương trình sẽ cho phép nhập tiếp học sinh,nếu trả lời "Không" chương trình sẽ xuất số lượng học sinh đã nhập,
thông tin của tất cả các học sinh đã nhập,và tổng điểm,điểm trung bình 3 môn Toán lý hoá.Và cho biết thông tin của học sinh có diểm cao nhất.
*/
typedef struct {
    float toan,ly,hoa;
    float tb;
} diem;

typedef struct {
    char name[30];
    char lop[30];
    char MSV[30];
    diem MonHoc;
} sinhvien;
int TaoDanhSach(sinhvien a[]) {
    int i=0;
    char chon;
    while (1) {
        printf("\nnhap vao ten sv: ");
        fflush(stdin);
        gets(a[i].name);
        printf("\nnhap vao lop sv: ");
        fflush(stdin);
        gets(a[i].lop);
        printf("\nnhap vao MSV: ");
        fflush(stdin);
        gets(a[i].MSV);
        printf("\nnhap vao diem toan, ly, hoa: ");
        fflush(stdin);
        scanf("%f%f%f",&a[i].MonHoc.toan, &a[i].MonHoc.ly, &a[i].MonHoc.hoa);
        a[i].MonHoc.tb =(float)(a[i].MonHoc.toan + a[i].MonHoc.ly + a[i].MonHoc.hoa)/3;
        i++;
        printf("\n=============ban co muon them sv khong?==============\n");
        printf("answer (yes/no): ");
        scanf("%c",&chon);
        chon=getchar();
        if (chon=='k') {
            break;
        }
    }
    return i;
}
void InDanhSach (sinhvien a[], int n) {
    int i;
    printf("\n%-20s %-30s %-20s %-20s %-20s %-20s %-20s %-20s\n","STT", "HO TEN", "LOP", "MSV", "TOAN", "LY", "HOA", "DIEM TB");
    for (i=0; i<n; i++) {
        printf("\n%-20d %-30s %-20s %-20s %-20.2f %-20.2f %-20.2f %-20.2f",i+1,a[i].name, a[i].lop, a[i].MSV,
               a[i].MonHoc.toan, a[i].MonHoc.ly, a[i].MonHoc.hoa, a[i].MonHoc.tb);
    }
}
void MaxPoint (sinhvien a[], int n) {
    int i=0,tam;
    float max =a[0].MonHoc.tb;
    for (i=0; i<n; i++) {
        if (a[i].MonHoc.tb>max) {
            max=a[i].MonHoc.tb;
        }
    }
    for (i=0; i<n; i++) {
        if (a[i].MonHoc.tb==max) {
            printf("\n%-20d %-30s %-20s %-20s %-20.2f %-20.2f %-20.2f %-20.2f",i+1,a[i].name, a[i].lop, a[i].MSV,
                    a[i].MonHoc.toan, a[i].MonHoc.ly, a[i].MonHoc.hoa, a[i].MonHoc.tb);
        }
    }
}
int main()
{
    int n;
    sinhvien a[100];
    n=TaoDanhSach(a);
    printf("\nit's %d students in list.\n",n);
    InDanhSach(a,n);
    printf("\n\n============sinh vien co diem trung binh cao nhat:================");
    MaxPoint(a,n);
    return 0;
}
