#include <stdio.h>
#include <stdlib.h>
//Bài tập 7: Đếm số chữ cái, số chữ số, số ký tự đặc biệt của chuỗi
//Viết chương trình C để đếm số chữ cái, số chữ số, số ký tự đặc biệt trong một chuỗi.
//Ví dụ: Nhập chuỗi: Tuyen tap 200 bai tap C co giai tai utt.edu.vn!
//Chuỗi này có: 32 chữ cái 3 chữ số 12 ký tự đặc biệt (khoảng trắng cũng là ký tự đặc biệt)
int DemSo (char chuoi[]) {
    int i=0;
    int dem=0;
    while (chuoi[i]!=NULL) {
        if (chuoi[i]>='0' && chuoi[i]<='9') { // nằm từ 0 đến 9
            dem++;
        }
        i++;
    }
    return dem;
}
int DemChu (char chuoi[]) {
    int i=0;
    int dem=0;
    while (chuoi[i]!=NULL) {
        if ((chuoi[i]>='a' && chuoi[i]<='z') || (chuoi[i]>='A' && chuoi[i]<='Z')) { //nằm từ a tới z
            dem++;
        }
        i++;
    }
    return dem;
}
int DemKTDB (char chuoi[]) {
        int i=0;
    int dem=0;
    while (chuoi[i]!=NULL) {
        if (!((chuoi[i]>='a' && chuoi[i]<='z') || (chuoi[i]>='A' && chuoi[i]<='Z') || (chuoi[i]>='0' && chuoi[i]<='9'))) { //không phải số và chữ cái
            dem++;
        }
        i++;
    }
    return dem;
}
int main()
{
    char chuoi[30];
    printf("nhap mot chuoi: ");
    fflush(stdin);
    gets(chuoi);
    printf("\nso chu cai: %d",DemChu(chuoi));
    printf("\nso chu so: %d",DemSo(chuoi));
    printf("\nso Ki tu dac biet: %d",DemKTDB(chuoi));
    return 0;
}
