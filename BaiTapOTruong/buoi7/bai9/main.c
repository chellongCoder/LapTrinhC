#include <stdio.h>
#include <stdlib.h>
//Bài tập 9: Đếm số phụ âm, nguyên âm
//Viết chương trình C để đếm số phụ âm, số nguyên âm có trong một chuỗi bất kỳ.
//Ví dụ: Nhập chuỗi: VietJack Chuỗi trên có 3 nguyên âm, 5 phụ âm
void Dem (char chuoi[]) {
    int i=0;
    int DemNguyenAm=0,DemPhuAm=0;
    while (chuoi[i]!=NULL) {
        if ((chuoi[i]=='a' || chuoi[i]=='e' || chuoi[i]=='i' || chuoi[i]=='o' || chuoi[i]=='u')
            || (chuoi[i]=='A' || chuoi[i]=='E' || chuoi[i]=='I' || chuoi[i]=='O' || chuoi[i]=='U')) {
            DemNguyenAm++;
        }
        else {
                DemPhuAm++;
        }
        i++;
    }
    printf("so nguyen am co trong chuoi la: %d",DemNguyenAm);
    printf("\nso phu an co trong chuoi la: %d",DemPhuAm);
}
int main()
{
    char chuoi[30];
    printf("nhap mot chuoi: ");
    gets(chuoi);
    Dem(chuoi);
    return 0;
}
