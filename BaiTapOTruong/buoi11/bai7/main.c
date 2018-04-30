#include <stdio.h>
#include <stdlib.h>
/*
Câu 7. Viết chƣơng trình sử dụng kiểu nhập xuất nhị phân với tệp có tên là SO_LIEU.C
để ghi lên tệp danh sách số liệu bán hàng có cấu trúc gồm các thành phần: Ten_hang, Don_gia, So_luong, Thanh_tien (= So_luong * Don_gia).
Sau đó hiện nội dung tệp ra màn hình theo dạng:
SO LIEU BAN HANG
STT Ten Hang Don gia So luong Thanh tien
1   Sach        5       100         500
2   But         2       300         600
Tong tien 1100
*/
typedef struct {
    char TenHang[30];
    int DonGia;
    int SoLuong;
    int ThanhTien;
}mathang;
void TaoDanhSach (char *filename)  {
    FILE *fp;
    fp = fopen(filename,"wb");
    mathang h;
    char key;
    do {
        printf("nhap vao ten mat hang: ");
        fflush(stdin);
        gets(h.TenHang);
        printf("nhap vao don gia: ");
        scanf("%d",&h.DonGia);
        printf("nhao vao so luong: ");
        scanf("%d",&h.SoLuong);
        printf("nhao vao tien: ");
        scanf("%d",h.ThanhTien);
        fwrite(&h, sizeof(mathang),1,fp);
        printf("\n ban co muon nhap them mat hang ? (an 'c' de tiep tuc): ");
        scanf("%c",&key);
        key = getchar();
    }while (key=='c');
    fclose(fp);
}
void DocThongTin (char *filename) {
    int count;
    while (1) {
        count = fread(&sv, 1, sizeof(mathang),1,fp);
        if (cout == 0) {
            break;
        }

    }
}
int main()
{
    char *filename = "SO_LIEU.txt";

    return 0;
}
