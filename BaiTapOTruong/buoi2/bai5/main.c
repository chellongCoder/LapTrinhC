#include <stdio.h>
#include <stdlib.h>
//Bài tập 5: Tìm số phần tử giống nhau trong một mảng
//Viết chương trình C để nhập các phần tử vào trong mảng, sau đó tìm số phần tử giống nhau trong mảng đó và in kết quả trên màn hình.
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    printf("\nnhap %d phan tu vao mang: \n",n);
    int a[n];
    int i,j;
    for (i=0 ;i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\ncac phan tu trong mang la: \n");
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
    int dem[n]; //tạo 1 mảng đếm, gán các phần tử trong mảng =0
    for (i=0; i<n; i++) {
        dem[i]=0;
    }
    for (i=0; i<n; i++) {
        for (j=i; j<n; j++) {
            if (a[i]==a[j]) {
                dem[i]++; //nếu tìm thấy giống nhau thì đêm số lượng phần tử đó và cho SL vào mảng đếm
            }
        }
    }
    int max=dem[0]; //số lưowngj nào nhiều nhất thì in ra
    for (i=0; i<n; i++) {
        if (dem[i]>max) {
            max=dem[i];
        }
    }
    printf("\nso phan tu giong nhau nhieu nhat trong mang la: %d",max);
    return 0;
}
