#include <stdio.h>
#include <stdlib.h>
//Bài tập 8: Đếm số lần xuất hiện của từng phần tử trong mảng
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    printf("\nnhap %d phan tu vao mang: \n",n);
    int a[n];
    int i,j;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    int dem,k,tam;
    printf("\ntan suat xuat hien cua cac phan tu trong mang la:\n");
    for (i=0; i<n; i++) {
        dem=0; //biến đêm phần tử
        int j=i-1; //duyết từ phần tử trc nó về 0
        do { //vòng lặp để kiểm tra xem phía trước nó đã được đếm chưa, nếu đếm rôi tức là đc in ra rồi k cần in nữa
            if (a[j]==a[i]) { //nếu trc đó có trùng
                tam=0;
                break; //break
            }
            else { //ngược lại nếu không có phần tử nào trc đó trùng
                tam=1;
            }
            j--; //giảm dần về phần tử 0
        }while(j>=0);
        if (tam==1) { //nếu thỏa mãn là không có phần tử trùng trc đó
            for (k=0; k<n; k++) { //đếm
                if (a[i]==a[k]) {
                    dem++;
                }
            }
            printf("phan tu %d co %d lan xuat hien\n",a[i],dem);
        }
    }
    return 0;
}
