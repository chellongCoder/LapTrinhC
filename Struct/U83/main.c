#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//viết 1 chương trình quản lí điểm sinh viên gồm các nhiệm vụ sau:
//1. nhập hồ sơ mỗi học sinh gồm có: họ tên, năm sinh, điểm trung bình học kì 1, điểm trung bình học kì 2
//2. in danh sánh các học sinh của lớp có điểm trung bình toàn 5 trở lên và tho thứ tự giảm dần của điểm trung bình tòan năm
//3. in danh sách các học sinh phải thi lại, điểm trung bình toàn dưới 5 theo thứ tự của tên
// khia báo kiểu cấu trúc sv
int Hienthimenu()
{
                printf("\n+------+------------------------------------+----------+-------+-----+-------+");
                printf("\n+------+----[               MENU LUA CHON                        ]---+-------+");
                printf("\n+------+------------------------------------+----------+-------+-----+-------+");
                printf("\n|----- + ----->          1. Nhap sinh vien                       <-----------|");
                printf("\n|----- + ----->          2. Hien thi sinh vien                   <-----------|");
                printf("\n|----- + ----->          3. ds sinh vien co diem trung binh tren5<-----------|");
                printf("\n|----- + ----->          4. sap xep sinh vien theo diem tb toan nam<---------|");
                printf("\n|----- + ----->          5. danh sach sinh vien theo  thu tu ten<------------|");
                printf("\n|----- + ----->          6. danh sach sinh vien thi lai theo  thu tu ten<----|");
                printf("\n|----- + ----->          7.chen 1 sinh vien sau 1 sinh vien      <-----------|");
                printf("\n|----- + ----->          7.xoa 1 sinh vien                       <-----------|");
                printf("\n|----- + ----->          0.exit program                          <-----------|");
                printf("\n+------+------------------------------------+----------+-------+-----+-------+");
                printf("\n\tBan chon muc nao : ");
   int chon;
   scanf("%d",&chon);
   return chon;
}
typedef struct {
    char hoten[30];
    int namsinh;
    float ki1, ki2;
    float tong;
}sinhvien;
//tạo 1 mảng sinh viên
sinhvien *SV; //biến cục bộ
int n;

//nhập danh sách
void TaoDanhSach () {
    int i;
    for (i=0; i<n; i++) {
        printf("\nho ten sinh vien thu %d: ",i+1);
        fflush(stdin);
        gets((SV+i)->hoten);
        printf("Nam SInh: ");
        (SV+i)->namsinh = 1990+rand()%(2000-1990);
        printf("Diem Ki 1: ");
        (SV+i)->ki1 = 10.10*rand()/RAND_MAX;
        printf("Dem Ki 2: ");
        (SV+i)->ki2 = 10.10*rand()/RAND_MAX;
        (SV+i)->tong = ((SV+i)->ki1+(SV+i)->ki2)/2;
    }
}
//in danh sách
void InDanhSach (int n, sinhvien *SV) {
    int i;
    printf("\n%-20s %-30s %-20s %-20s %-20s\n", "STT", "Ho Va Ten", "Nam Sinh", "DIem Ki 1", "Diem Ki 2");
    printf("=================================================================================================\n");
    for (i=0; i<n; i++) {
        printf("%-20d %-30s %-20d %-20.2f %-20.2f\n",i+1, (SV+i)->hoten, (SV+i)->namsinh, (SV+i)->ki1, (SV+i)->ki2);
    }
}
//hàm kiểm tra điểm trung bình có hơn 5 hay k
int kt (float ki1, float ki2) {
    int i;
    for (i=0; i<n; i++) {
        if (ki1>5 && ki2>5) {
            return 1;
        }
        else if (ki1<5 && ki2<5) {
            return -1;
        }
    }
    return 0;
}
//hàm sắp xếp sv theo điểm tb toàn năm
void SapXepSV1 () {
    sinhvien tam;
    int i,j;
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if ((SV+j)->tong > (SV+i)->tong) {
                tam = *(SV+i);
                *(SV+i) = *(SV+j);
                *(SV+j) = tam;
            }
        }
    }
}
// hàm độ dài chuỗi

//hàm so sánh chuỗi
int STRCMP (char *s1, char *s2) {
    int length1 = strlen(s1);
    int length2 = strlen(s2);
    int lengthmin = (length1>length2)? length1:length2;
    int i;
    //kiểm tra xem chuỗi này có là chuỗi con của chuỗi kia hay k, nếu là chuỗi con thì so sánh độ dài
    for (i=0; i<lengthmin; i++) {
        if (s1[i]>s2[i]) {
            return 1;
        }
        else {
            return -1;
        }
    }
    if (length1>length2) {
        return 1;
    }
    else {
        return -1;
    }
    return 0; //nếu bằng nhau return 0
}
//hàm sắp xếp sv theo tên
void SapXepSV2(sinhvien *SV, int n) {
    sinhvien tam;
    int i,j;
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (STRCMP((SV+i)->hoten, (SV+j)->hoten)>0) {
                tam = *(SV+i);
                *(SV+i) = *(SV+j);
                *(SV+j) = tam;
            }
        }
    }
}
void SVThiLai () {
    sinhvien thilai[30];
    int i;
    int j=0; //biến chạy cho mảng mới
    for (i=0; i<n; i++) {
        if (kt((SV+i)->ki1, (SV+i)->ki2)==-1) {
            thilai[j] = *(SV+i);
            j++;
        }
    }
    SapXepSV2(thilai,j); //sắp xếp sinh viên theo  tên
    InDanhSach(j,thilai);
}
void svth(){
    char t;
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n+------+----[               SINH VIEN THUC HIEN                  ]---+-------+");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n|----- + ----->          NGUYEN NHAT LONG       N/S: 17/07/1998  <-----------|");
    printf("\n|----- + ----->                  LOP: Cl04                       <-----------|");
    printf("\n|----- + ----->          ACT academy networking                  <-----------|");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n\tBan co muon thoat chuong trinh khong (please don't hit 'c' || 'C')\n");
    scanf("%c",&t);
    t=getchar();
    if (t=='c' || t=='C') {
        system("cls");
    }
}
void ChenSV () {
    sinhvien sv, svm;
    int i, check=0,vitri;
    printf("\nban can chen sinh vien moi sau sinh vien có ten la: ");
    fflush(stdin);
    gets(sv.hoten);
    for (i=0; i<n; i++) {
        if (strcmp(sv.hoten, SV[i].hoten) == 0) {
            check =1;
            vitri=i;
            break;
        }
    }
    if (check == 0) {
        printf("\nkhong tim thay sinh vien nay!");
        exit(0);
    }
    printf("\nnhap thong tin sinh vien can chen them: \n");
    printf("nhap ten sinh vien moi: ");
    fflush(stdin);
    gets(svm.hoten);
    svm.namsinh = 1990 + rand()%11;
    svm.ki1 = 10.10*rand()/RAND_MAX;
    svm.ki2 = 10.10*rand()/RAND_MAX;
    n=n+1; //cấp phát thêm 1 phần tử nữa cho mảng
    for (i=n-1; i>vitri; i--) { //chạy từ đầu về trước vị trí cần chèn
        SV[i] = SV[i-1];
    }
    SV[vitri+1] = svm; //chèn sau sinh viên vừa nhập tên
}
void XoaSV () {
    int i,vitri,check=0;
    sinhvien svx;
    printf("nhap vao ten sinh vien can xoa: ");
    fflush(stdin);
    gets(svx.hoten);
    for (i=0; i<n; i++) {
        if (strcmp(svx.hoten, SV[i].hoten) == 0) {
            vitri = i;
            check = 1;
            break;
        }
    }
    if (check == 0) {
        printf("khong tim thay sinh vien can xoa");
        exit(0);
    }
    for (i=vitri; i<n; i++) {
        SV[i] = SV[i+1];
    }
    n=n-1; //rút đi 1 phần tử trong mảng
}
int main()
{
    srand(time(NULL));
    printf("nhap vao so luong sinh vien: ");
    scanf("%d",&n);
    SV = (sinhvien*)malloc(n*sizeof(sinhvien));
    int chon;
    char key;
    int i;
    do {
        chon = Hienthimenu();
        switch (chon) {
            case 0: {
                svth();
            }break;
            case 1: TaoDanhSach();break;
            case 2: InDanhSach(n,SV);break;
            case 3: {
                for (i=0; i<n; i++) {
                    if (kt((SV+i)->ki1, (SV+i)->ki2)==1) {
                         printf("%-20d %-30s %-20d %-20.2f %-20.2f\n",i, (SV+i)->hoten, (SV+i)->namsinh, (SV+i)->ki1, (SV+i)->ki2);
                    }
                }
            }break;
            case 4: {
                SapXepSV1();
            }break;
            case 5: {
                SapXepSV2(SV,n);
            }break;
            case 6: {
                SVThiLai();
            }break;
            case 7: {
                ChenSV();
            }break;
            case 8: {
                XoaSV();
            }break;
        }
        printf("ban co muon nhap tiep hay khong? ");
        key=_getch();
    }while(key=='c');
    return 0;
}
