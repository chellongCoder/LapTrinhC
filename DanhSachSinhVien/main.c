#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int STT;
    int MSSV; // mã số sinh viện
    char namesv[30];
    char XepLoai[30];
    struct diem {
        float NhapMonLapTrinh, ToanA1, ToanA3, AnhVan, TrungBinhTichLuy;
    }diemso ;
} sinhvien;
sinhvien inputSV () {
    sinhvien SV;
    printf("||nhap vao STT: ");
    scanf("%d",&SV.STT);
    printf("||nhap vao MSSV: ");
    scanf("%d", &SV.MSSV);
    printf("||nhap vao ten SV: ");
    fflush(stdin);
    gets(SV.namesv);
    printf("||nhap vao diem Nhap Mon Lap Trinh: ");
    scanf("%f",&SV.diemso.NhapMonLapTrinh);
    printf("||nhap vao diem toan A1: ");
    scanf("%f",&SV.diemso.ToanA1);
    printf("||nhap vao diem toan A3: ");
    scanf("%f",&SV.diemso.ToanA3);
    printf("||nhap vao diem Anh Van: ");
    scanf("%f", &SV.diemso.AnhVan);
    SV.diemso.TrungBinhTichLuy = (SV.diemso.NhapMonLapTrinh + SV.diemso.ToanA1 + SV.diemso.ToanA3 + SV.diemso.AnhVan)/4;

    return SV;
}
int Hienthimenu()
{
                printf("\n+------+------------------------------------+----------+-------+-----+-------+");
                printf("\n+------+----[               MENU LUA CHON                        ]---+-------+");
                printf("\n+------+------------------------------------+----------+-------+-----+-------+");
                printf("\n|----- + ----->          0.exit program                          <-----------|");
                printf("\n|----- + ----->          1. Nhap sinh vien                       <-----------|");
                printf("\n|----- + ----->          2. Hien thi sinh vien                   <-----------|");
                printf("\n|----- + ----->          3. kiem tra sinh vien thuoc loai nao    <-----------|");
                printf("\n|----- + ----->          4. Tim kiem sinh vien theo ma sinh vien <-----------|");
                printf("\n|----- + ----->          5. tim diem trung binh lon nhat         <-----------|");
                printf("\n|----- + ----->         6. liet ke sinh vien co cung xep loai    <-----------|");
                printf("\n|----- + ----->         7. sap xep sinh vien theo diem trung binh<-----------|");
                printf("\n|----- + ----->         8. Sinh Vien Thuc Hien                   <-----------|");
                printf("\n|----- + ----->                                                  <-----------|");
                printf("\n+------+------------------------------------+----------+-------+-----+-------+");
                printf("\n\tBan chon muc nao : ");
   int chon;
   scanf("%d",&chon);
   return chon;
}
sinhvien NhapMangSV (sinhvien *SV, int n) {
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n|----- + ----->                NHAP SINH VIEN                 <--------------|");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    int i;
    printf("\n===================================");
    for (i=0; i<n; i++) {
        printf("\n||thong tin sinh vien thu %d la: \n",i+1);
        *(SV+i)=inputSV();
    }
    printf("\n\tBam enter de tro ve menu.\n");
    getch();
}
#define sv (*(SV+i)).diemso
// kiểm tra xem sinh viên thuộc loại nào (xuất sắc, tốt, khá hay trung bình)
sinhvien KiemTraSV (sinhvien *SV, int n) {
    int i;
    for (i=0; i<n; i++) {
        if (sv.TrungBinhTichLuy >= 9) {
            strcpy((SV+i)->XepLoai,"Xuat Sac");
        }
        if (sv.TrungBinhTichLuy>=8 && sv.TrungBinhTichLuy<9) {
            strcpy((SV+i)->XepLoai,"tot");
        }
        if (sv.TrungBinhTichLuy>=6.5 && sv.TrungBinhTichLuy<8) {
            strcpy ((SV+i)->XepLoai,"kha");
        }
        if (sv.TrungBinhTichLuy>=5 && sv.TrungBinhTichLuy<6.5) {
            strcpy ((SV+i)->XepLoai,"trung binh");
        }
        if (sv.TrungBinhTichLuy<5) {
            strcpy ((SV+i)->XepLoai,"yeu");
        }
    }
    printf("\n\tBan da kiem tra Sv! Bam enter de tro ve menu.\n");
    getch();
}
//tìm sinh viên theo tên sv
sinhvien TimSinhVien (sinhvien *SV, int n) {
    int i,j,tam;
    char Ten[30];
    printf("\nnhap vao ten sv tim kiem (Neu muon tim theo MSSV thi hay an enter): ");
    fflush(stdin);
    gets(Ten);
    if (NULL) {
        printf("\n");
    }
    for (i=0; i<n; i++) {
        if ( strlen(Ten)==strlen((SV+i)->namesv) && strcmp(Ten, ((SV+i)->namesv))==0) {
            tam=1; break;
        }
    }
    if (tam==1) {
        printf("co xuat hien sinh vien'%s' co thong tin la: \n",Ten);
        printf("\nSTT:%-7d MSSV:%-10d XepLoai:%-10s Diem NMLT:%-10.2f Diem ToanA1:%-10.2f Diem ToanA3:%-10.2f AnhVan:%-10.2f TBTL:%-10.2f",(SV+i)->STT,(SV+i)->MSSV, (SV+i)->XepLoai, sv.NhapMonLapTrinh, sv.ToanA1,sv.ToanA3, sv.AnhVan, sv.TrungBinhTichLuy);
    return;
    }
    int MSSV;
    printf("\nnhap vao ma so sinh vien: ");
    scanf("%d",&MSSV);
    for (i=0; i<n; i++) {
        if (MSSV==(SV+i)->MSSV) {
            tam=2;break;
        }
    }
    if (tam==2) {
        printf("co xuat hien sv co MSSV la %d co thong tin la",MSSV);
        printf("\nSTT:%-7d MSSV:%-10d HoTen:%-30s XepLoai:%-10s Diem NMLT:%-10.2f Diem ToanA1:%-10.2f Diem ToanA3:%-10.2f AnhVan:%-10.2f TBTL:%-10.2f",(SV+i)->STT,(SV+i)->MSSV, (SV+i)->namesv, (SV+i)->XepLoai, sv.NhapMonLapTrinh, sv.ToanA1,sv.ToanA3, sv.AnhVan, sv.TrungBinhTichLuy);
    }
    printf("\n\tBam enter de tro ve menu.\n");
    getch();
}

// tìm sinh viên có điểm trung bình tích lũy cao nhất
float TimDiemSinhVien (sinhvien *SV, int n) {
    int i;
    float max;
    max=(*(SV+0)).diemso.TrungBinhTichLuy;
    for(i=0; i<n; i++) {
        if(sv.TrungBinhTichLuy>max) {
            max=sv.TrungBinhTichLuy;
        }
    }
    return max;
}
//- Liệt kê danh sách các sinh viên thuộc một xếp loại bất kỳ (xuất sắc, tốt, trung bình) (1 điểm)
sinhvien LietKe (sinhvien *SV, int n) {
    int i;
    char XepLoai[30];
    printf("\nnhap vao nhom xep loai: ");
    fflush(stdin);
    gets(XepLoai);
    printf("\n cac sinh vien co cung xep loai la: \n");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+----------------+---------------+--------------------+-----------------------|");
    printf("\n|----- +---------------+------------------+------		DANH SACH SINH VIEN      ---------------------+------------------------+---------------------|");
    printf("\n+------+------------------------------------+----------+-------+-----+----------+-------------------+--------------------------+---------------------+-----|");
    printf("\n%-7s %-10s %-30s %-10s %-10s %-10s %-10s %-10s %-10s", "STT", "MSSV", "Ho Ten", "Xep Loai", "Diem NMLT", "Diem ToanA1", "Diem ToanA3", "Diem AV", "Diem TBTL");
    printf("\n+------+------------------------------------+----------+-------+-----+------+---------------+---------------------+---------------------+-------------+--- |");
    for (i=0; i<n; i++) {
        if ((strlen(XepLoai)==strlen((SV+i)->XepLoai)) && (strcmp(XepLoai,(SV+i)->XepLoai)==0)) {
             printf("\n%-7d %-10d %-30s %-10s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f",(SV+i)->STT, (SV+i)->MSSV, (SV+i)->namesv, (SV+i)->XepLoai, sv.NhapMonLapTrinh, sv.ToanA1, sv.ToanA3, sv.AnhVan, sv.TrungBinhTichLuy);
        }
    }
    printf("\n\tBam enter de tro ve menu.\n");
    getch();
}
sinhvien SapXepSinhVien (sinhvien *SV, int n) {
    sinhvien temp;
    int i,j,min;
    for (i=0; i<n; i++) {
        min=i;
        for (j=i+1; j<n; j++) {
            if ((*(SV+j)).diemso.TrungBinhTichLuy > (*(SV+i)).diemso.TrungBinhTichLuy) {
                min=j;
            }
            if (min!=i) {
                temp=*(SV+min);
                *(SV+min)=*(SV+i);
                *(SV+i)=temp;
            }
        }
    }
    printf("\nban da sap xep sinh vien theo diem trung binh, an 2 de xuat danh sach sinh vien!\n");
    printf("\n\tBam enter de tro ve menu.\n");
    getch();
}
svth(){
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n+------+----[               SINH VIEN THUC HIEN                  ]---+-------+");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n|----- + ----->          NGUYEN NHAT LONG       N/S: 17/07/1998  <-----------|");
    printf("\n|----- + ----->                  LOP: Cl04                       <-----------|");
    printf("\n|----- + ----->          ACT academy networking                  <-----------|");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n\tBam enter de tro ve menu.\n");
    getch();
}

sinhvien XuatMangSV (sinhvien *SV, int n) {
    int i;
    printf("\n+------+------------------------------------+----------+-------+-----+-------+----------------+---------------+--------------------+-----------------------|");
    printf("\n|----- +---------------+------------------+------		DANH SACH SINH VIEN      ---------------------+------------------------+---------------------|");
    printf("\n+------+------------------------------------+----------+-------+-----+----------+-------------------+--------------------------+---------------------+-----|");
    printf("\n%-7s %-10s %-30s %-10s %-10s %-10s %-10s %-10s %-10s", "STT", "MSSV", "Ho Ten", "Xep Loai", "Diem NMLT", "Diem ToanA1", "Diem ToanA3", "Diem AV", "Diem TBTL");
    printf("\n+------+------------------------------------+----------+-------+-----+------+---------------+---------------------+---------------------+-------------+--- |");
    for (i=0; i<n; i++) {
       // printf("\n\t-->thong tin sinh vien %d la<--\n",i+1);
        printf("\n%-7d %-10d %-30s %-10s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f",(SV+i)->STT, (SV+i)->MSSV, (SV+i)->namesv,(SV+i)->XepLoai, sv.NhapMonLapTrinh, sv.ToanA1, sv.ToanA3, sv.AnhVan, sv.TrungBinhTichLuy);
    }
    printf("\n\tBam enter de tro ve menu.\n");
    getch();
}


int main()
{
    sinhvien *SV;
    int n;
    char tt;
    int chon;
    printf("nhap vao so sinh vien: ");
    scanf("%d",&n);
    SV=(sinhvien*)malloc(n*sizeof(sinhvien));
    printf("==============danh sach sinh vien===============\n");
    do {
        chon=Hienthimenu();
        switch (chon) {
            case 0: exit(0);
            case 1: NhapMangSV(SV,n); break;
            case 2: XuatMangSV(SV,n);break;
            case 3: KiemTraSV(SV,n);break;
            case 4:TimSinhVien(SV,n);break;
            case 5: {
                float max=TimDiemSinhVien(SV,n);
                printf("\nsinh vien diem trung binh tich luy cao nhat la: %.2f\n",max);
            } break;
            case 6: LietKe(SV,n);break;
            case 7: SapXepSinhVien(SV,n);break;
            case 8: svth ();break;
            default: printf("\nnhap khong dung lenh! moi nhap lai\n");
        }
        printf("\nBam phim bat ky de tiep tuc, ESC de dung");
        tt=getch();
    } while(tt!=27) ;

    return 0;
}
