#include <stdio.h>
#include <stdlib.h>
/*
Dùng mảng một chiều để lưu trữ một lớp học có N sinh viên. Biết rằng mỗi sinh viên bao gồm các thông tin sau:
Tên (chuỗi ký tự), Mã số sinh viên (chuỗi ký tự), Điểm trung bình. Hãy viết hàm thực hiện các yêu cầu sau:
a. In danh sách sinh viên ra màn hình
b. Liệt kê những sinh viên có điểm trung bình cao nhất trong lớp học.
c. Cho biết số sinh viên có điểm trung bình >=5. Nếu không có thì thông báo không có.
d. Tìm một sinh viên có tên X trong lớp học (X nhập từ bàn phím)
e. Xoá một sinh viên có mã số cho trước trong lớp học. Nếu không có thì thông báo không có.
f. Sắp xếp danh sách sinh viên tăng theo điểm trung bình bằng thuật toán sắp xếp mà các bạn đã học (Selection Sort, Interchange Sort, Binary Sort)
g. Chèn một sinh viên vào lớp học, biết ràng sau khi chèn danh sách sinh viên vẫn tăng dần theo điểm trung bình.
*/
typedef struct {
    char Hoten[30];
    char MSV[30];
    float DiemTrungBinh; //dạng số thực
}SinhVien;

// tạo 1 danh sách

typedef struct list {
    SinhVien sv;
    struct list *next; //1 con trỏ next để chứa địa chỉ các node tiếp theo
}node;

//tạo các con trỏ của danh sahcs

node *head; //con trỏ đầu
node *tail;//con trỏ cuối
node *p;// tạo các node;
//tạo node :))
void create_node (SinhVien sv) {
    p = (SinhVien*)malloc(sizeof(SinhVien)); //cấp phát bộ nhớ động cho 1 node p
    if (p==NULL) {
        printf("khong cap phat duoc.");
        exit(0); //thường thì chưa xảy ra trường hơp này :)
    }
    else {
        p ->next = NULL; //nó trỏ về vùng nhớ trống
        p ->sv = sv; // dữ liệu sinh viên của con trỏ p bằng dữ liệu sinh viên sắp nhập vào
    }
}
 //giờ thì thêm vào đâu và đuôi thôi

void AddHead () {
    if (head==NULL) {
        head=tail=p; //lúc mà mới khởi tạo đc 1 node p thì đuôi bằng đầu
    }
    else {
        p->next = head; //tạo 1 cái p ở đằng sau head cũ vào cho next của p chứa địa chỉ của head cũ
        head = p; //lúc này cái p mới đã là đầu
    }
 }

 void AddTail () {
    if (head==NULL) {
        head=tail=p;
    }
    else {
        tail ->next = p; //vì thêm vào cuối nên next của cái tail cũ phải chứa địa chỉ của p
        tail = p;
    }
}

 //làm hàm nhập dữ liệu

void InPut () { //mình sẽ nhập từng sinh viên 1 và hỏi xem có muốn nhập tiếp hay không
    SinhVien sv;
    char chon;
    while (1) {
        printf("nhap vao ten sinh vien: ");
        fflush(stdin); //hàm nhập đầu vào chuẩn, nên có khi dùng string
        gets(sv.Hoten);
        printf("nhap vao MSV: ");
        fflush(stdin);
        gets(sv.MSV);
        printf("nhap vao diem trung binh: ");
        scanf("%f",&sv.DiemTrungBinh);
        create_node(sv); //tạo 1 cái node
        AddHead(); //muốn thêm đầu thì add head :)
        //AddTail(); //muốn thêm đuôi thì add tail :)
        printf("ban có muon nhap them sinh vien khong? ");
        scanf("%c",&chon);
        chon = getchar();
        //quên mất
        if (chon=='k' || chon=='K') {
            break;
        }
    }
}
void OutPut () {
    int i=1;
    p = head;
    printf("\n%-30s %-30s %-30s %-30s\n", "STT", "Ho Ten", "MSV", "Diem trung binh"); //đừng cố hiểu chỗ này nếu bạn không hiểu, không có cũng k sao
    printf("=============================================================================================\n");
    while (p!=NULL) { //khi mà hết danh sách
        printf("%-30d %-30s %-30s %-30.2f\n",i, p->sv.Hoten, p->sv.MSV, p->sv.DiemTrungBinh);
        p = p->next; //giống như vòng for (i=0; i,n; i++) ấy
        i++;
    }
}
void maxtb () {
    p = head;
    node *max = p;
    int dem=0;
    while (p!=NULL) {
        if (max->sv.DiemTrungBinh > p->sv.DiemTrungBinh) {
            max = p;
            dem++;
        }
        p = p->next;
    }
    if (dem==0) {
        OutPut();
    }
}
int main()
{
    InPut();
    int i=1;
    p = head;
    printf("\n%-30s %-30s %-30s %-30s\n", "STT", "Ho Ten", "MSV", "Diem trung binh"); //đừng cố hiểu chỗ này nếu bạn không hiểu, không có cũng k sao
    printf("=============================================================================================\n");
    while (p!=NULL) { //khi mà hết danh sách
        printf("%-30d %-30s %-30s %-30.2f\n",i, p->sv.Hoten, p->sv.MSV, p->sv.DiemTrungBinh);
        p = p->next; //giống như vòng for (i=0; i<n; i++) ấy
        i++;
    }
    return 0;
}
