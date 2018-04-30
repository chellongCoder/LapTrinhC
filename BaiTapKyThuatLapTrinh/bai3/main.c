#include <stdio.h>
#include <stdlib.h>
//1. Chon 1 de Nhap day so
//2. Chon 2 de Tim phan tu lon nhat
//3. Chon 3 de Tinh tong day
//4. Chon 4 de Ket thuc
//chức năng 2 3 viết theo đệ quy
void nhapDaySo(int a[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
}

void inDaySo(int a[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
}

int Menu() {
    printf("\n-------------Menu--------------\n");
    printf("1. nhap day so\n");
    printf("2. tim phan tu lon nhat\n");
    printf("3. tinh tong day so\n");
    printf("4. ket thuc\n");
    printf("-------------------------------\n");
    int choice;
    printf("chon:> ");
    scanf("%d", &choice);
    return choice;
}

int deQuyTimPhanTuLonNhat(int a[], int start, int end) {//giống thuật toán quick sort, chia thành nửa mảng rồi so sánh
    int temp=0;
    if(start==end) {
        return a[start];
    } else {
        temp = (start+end)/2; //lấy ra vị trí giữa
        if(deQuyTimPhanTuLonNhat(a, start, temp) > deQuyTimPhanTuLonNhat(a, temp+1, end)) {
            return deQuyTimPhanTuLonNhat(a, start, temp);
        } else {
            return deQuyTimPhanTuLonNhat(a, temp+1, end);
        }
    }
}

void timPhanTuLonNhat(int a[], int n) {
    int Max = deQuyTimPhanTuLonNhat(a,0,n-1);
    printf("phan tu lon nhat trong mang la: %d", Max);
}

int deQuyTinhTong(int a[], int n) {//truyền vào vij trí phần tử cuối và 0
    if(n==0) return 0;
    return a[n-1] + deQuyTinhTong(a,n-1);
}


void tinhTongDaySo(int a[], int n) {
    int Sum = deQuyTinhTong(a,n);
    printf("tong day so la: %d\n", Sum);
}

void ketThuc() {
    printf("bye bye!");
    exit(0);
}
int main() {
    int n;
    printf("nhap vao so luong phan tu: ");
    scanf("%d", &n);
    int a[n];
    int choice;
    do {
        choice = Menu();
        switch (choice) {
        case 1:
            nhapDaySo(a,n);
            break;
        case 2:
            timPhanTuLonNhat(a,n);
            break;
        case 3:
            tinhTongDaySo(a,n);
            break;
        case 4:
            ketThuc();
            break;
        default:
            printf("moi ban chon lai!\n");
        }
    } while(1);
    return 0;
}
