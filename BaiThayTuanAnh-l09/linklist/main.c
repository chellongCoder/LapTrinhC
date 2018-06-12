#include <stdio.h>
#include <stdlib.h>
#define NAME_LEN 30
#include <string.h>
int menu () {
    printf("1. tao danh sach sinh vien\n");
    printf("2. hien thi danh sach sinh vien\n");
    printf("3. chen them sinh vien. \n");
    printf("4. xoa 1 sinh vien.\n");
    printf("5. sua 1 sinh vien . \n");
    printf("6. ghi danh sach vao file.\n");
    printf("7. doc danh sach \n");
    printf("================================\n");
    printf("ban chon lenh: ");
    int chon;
    scanf("%d", &chon);
    return chon;
}
typedef struct SinhVien{
    char hoten[NAME_LEN];
    int tuoi;
    float diemtb;
    struct SinhVien *next;
}SinhVien;

SinhVien *first = NULL;
SinhVien *last = NULL;
char ten_file[] = "dssv.bin";
void Tao_Danh_Sach () {
    SinhVien *sv;
    char Tiep_tuc;
    do {
        // nhập thông tin sv
        sv = (SinhVien*)malloc(sizeof(SinhVien));
        printf("nhap thong tin sinh vien can them vao danh sach: \n");
        printf("Ho Va Ten: ");
        fflush(stdin);
        gets(sv->hoten);
        printf("Tuoi: ");
        scanf("%d",&sv->tuoi);
        printf("diem tb: ");
        scanf("%f",&sv->diemtb);
        sv->next = NULL;
        // thêm vào danh sách
        if (first == NULL) {
            first = sv;
            last = sv;
        }
        else {
            last->next = sv;
            last = sv;
        }

        // hỏi xem có muốn nhập tiếp hay k
        printf("ban co muon nhap tiep hay khong? (C/K) ");
        fflush(stdin);
        scanf("%c",&Tiep_tuc);
    }while (Tiep_tuc!='k' && Tiep_tuc!='K');
}
void Hien_Thi_Danh_Sach () {
    printf("%-3s %-*s %-4s %-7s\n", "STT", NAME_LEN, "Ho va Ten", "Tuoi", "diem tb");
    int stt = 0;
    SinhVien *sv = first;
    while (sv != NULL) {
        stt++;
        printf("%-3d %-*s %-4d %-7.2f\n",stt, NAME_LEN, sv->hoten, sv->tuoi, sv->diemtb);
        sv = sv->next;
    }
}

SinhVien *Tim_Sinh_Vien (char hoten[]) { //hàm tìm sinh viên đứng sau sinh viên chèn vào
    SinhVien *sv = first;
    while (sv!=NULL && strcmp(hoten, sv->hoten)!=0) { //chưa hết danh sách và chưa tìm thấy
        sv = sv->next; //duyệt tiếp
    }
    return sv;
}
SinhVien *Tim_Sinh_Vien_Truoc(SinhVien *sv) { //hàm tìm sinh viên đứng trước sinh viên chèn vào
    if (sv == first) {
        return NULL;
    }
    SinhVien *preview = first;
    while (preview->next!=sv) {
        preview = preview->next;
    }
    return preview;
}
void Chen_Them_Sinh_Vien () {
    char hoten[NAME_LEN];
    printf("ban muon chen truoc sinh vien nao? ");
    fflush(stdin);
    gets(hoten);
    SinhVien *after = Tim_Sinh_Vien (hoten);
    if (after == NULL) {
        printf("khong tim thay sinh vien %s\n",hoten);
    }
    SinhVien *new_sv;
    new_sv = (SinhVien*)malloc(sizeof(SinhVien));
    printf("============nhap thong tin sinh vien moi==========\n");
    printf("ho va ten: ");
    fflush(stdin);
    gets(new_sv->hoten);
    printf("tuoi: ");
    scanf("%d",&new_sv->tuoi);
    printf("diem tb: ");
    scanf("%f",&new_sv->diemtb);
    new_sv->next = NULL;
    // thực hiện chèn
    SinhVien *preview = Tim_Sinh_Vien_Truoc(after);
    if (preview == NULL) { //tức là đằng trước nó là rỗng
        new_sv->next = after; //cũng là trỏ đến first
        first = new_sv;//cho đầu bằng sinh viên mới
    }
    else { //mặt khác nếu ở giữa danh sách
        new_sv->next = after; //sinh viên mới chứa trỏ đến sv sau nó
        preview->next = new_sv; //sinh viên trc nó trỏ đến sv mới
    }
}
void Xoa_Sinh_Vien () {
    SinhVien *sv;
    printf("nhap vao ten sinh vien can xoa: ");
    char hoten[NAME_LEN];
    fflush(stdin);
    gets(hoten);
    //tìm sinh viên
    sv = Tim_Sinh_Vien(hoten);
    if (sv == NULL) {
        printf("khong tim thhay sinh vien can xoa\n");
        return;
    }
    //xóa sinh viên
    SinhVien *preview = Tim_Sinh_Vien_Truoc(sv); //tìm sinh viên đằng trc sinh viên cần xóa
    if (preview == NULL) {
        first = first->next;
    }
    else {
        preview->next = sv->next;
    }
    free(sv);
}
void Sua_Sinh_Vien () {
    char hoten[NAME_LEN];
    printf("nhap vao ho ten sinh vien: ");
    fflush(stdin);
    gets(hoten);
    SinhVien *sv = first;
    while (sv!=NULL) { //duyệt
        if (strcmp(sv->hoten, hoten) == 0) { //tìm thấy sinh viên
            printf("======sua sinh vien %s======\n",hoten);
            printf("ho va ten: ");
            fflush(stdin);
            gets(sv->hoten);
            printf("tuoi: ");
            scanf("%d",&sv->tuoi);
            printf("diem tb: ");
            scanf("%f",&sv->diemtb);
            printf("da sua sinh vien %s\n", hoten);
        }
        sv = sv->next;
    }
}
void Luu_vao_File () {
    FILE *f = fopen(ten_file, "wb"); //mở gghi file
    SinhVien *sv = first;
    while (sv != NULL) { //ghi từng sinh viên lên file
        fwrite(sv, sizeof(SinhVien), 1, f);
        sv=sv->next;
    }
    fclose(f);
    printf("danh sach da duoc luu vao file \n");

}
void Doc_Tu_File () {
    FILE *f = fopen(ten_file,"rb");
    SinhVien *sv;
    int count;
    do {
        // nhập thông tin sv
        sv = (SinhVien*)malloc(sizeof(SinhVien));
        count = fread(sv, sizeof(SinhVien), 1, f);
        if (count == 0) {
            break;
        }
        // thêm vào danh sách
        sv->next = NULL;
        if (first == NULL) { //nếu danh sách chưa  có gì
            first = sv; //first và last bằng sv vừa tạo
            last = sv;
        }
        else { //nếu ds đã có sinh viên
            last->next = sv; //sinh nối
            last = sv;
        }
    }while (1);
    fclose(f);
}
int main()
{
    int da_chon;
    do {
        da_chon = menu();
        switch (da_chon) {
            case 1: {
                Tao_Danh_Sach();
            }break;
            case 2: {
                Hien_Thi_Danh_Sach();
            }break;
            case 3: {
                Chen_Them_Sinh_Vien();
            }break;
            case 4: {
                Xoa_Sinh_Vien();
            }break;
            case 5: {
                Sua_Sinh_Vien();
            }break;
            case 6: {
                Luu_vao_File();
            }break;
            case 7: {
                Doc_Tu_File();
            }break;
        }
    }while (da_chon!=8);
    return 0;
}
