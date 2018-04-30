#include <stdio.h>
#include <stdlib.h>
//Tìm phần tử lớn thứ hai trong mảng
//Viết chương trình C để nhập một mảng, sau đó tìm phần tử lớn thứ hai rồi in kết quả trên màn hình.
//Bài tập tìm phần tử lớn thứ hai khá thú vị và đôi khi bạn cần phải sử dụng đến phần tử lớn thứ hai trong mảng. Bài tập C này giúp bạn làm quen với các khái niệm:
//khai báo mảng, khởi tạo mảng, và cách truy cập các phần tử của mảng trong C.
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    printf("nhap %d phan tu vao mang: \n",n);
    int a[n];
    int i,j;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\ncac phan tu trong mang la: \n");
    for (i=0; i<n; i++) {
        printf("%4d",a[i]);
    }
    //tìm phần tử lớn nhất trong mảng vừa tạo
    int max=a[0];
    int tam=0; //biến tạm = vị trí đầu
    for (i=0; i<n; i++) {
        if (a[i]>max) { //nếu tìm ra phần tử lớn nhất
            max=a[i];
            tam=i; //thì lấy vị trí tại đó
        }
    }
    //xóa phần tử lớn nhất tại vi trí tam đi
    for (i=tam; i<n; i++) {
        a[i]=a[i+1];
    }
    printf("\nmang sau khi xoa phan tu lon nhat la: \n");
    for (i=0; i<n-1; i++) {
        printf("%4d",a[i]);
    }
    //hình thành 1 mảng mới, tìm max trong mảng mới
    int maxNew=a[0];
    for (i=0; i<n-1; i++) {
        if (a[i]>maxNew){
            maxNew=a[i];
        }
    }
    printf("\nphan tu lon thu 2 trong mang la: %d",maxNew);
    return 0;
}
