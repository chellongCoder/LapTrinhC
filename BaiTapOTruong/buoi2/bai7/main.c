#include <stdio.h>
#include <stdlib.h>
//Bài tập 7: Trộn (ghép) hai mảng
//Viết chương trình C để trộn (ghép) hai mảng có cùng kích cỡ và sau đó sắp xếp các phần tử của mảng trộn này theo thứ tự tăng dần.
//Bài tập C này giúp bạn làm quen với các khái niệm: khai báo mảng, khởi tạo mảng, và cách truy cập các phần tử của mảng trong C.
//Ngoài ra, bài tập C này còn minh họa giúp bạn cách sắp xếp các phần tử mảng theo thứ tự tăng dần.
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    //nhập mảng a
    int a[n];
    printf("\nnhap %d phan tu vao mang a: \n",n);
    int i,j;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    //nhập mảng b
    int b[n];
    printf("\nnhap %d phan tu vao mang b: \n",n);
    for (i=0; i<n; i++) {
        printf("b[%d]= ",i);
        scanf("%d",&b[i]);
    }
    //tạo mảng trộn c[]
    int c[2*n];
    int ViTriA=0; //vị trí để gán mảng a vào mảng c
    int ViTriB=0; //vị trí để gán mảng b vào mảng c
    for (i=0; i<2*n; i++) { //duyệt đến 2*n
        if (ViTriA<n) { //gán hết a vào c
            c[i]=a[ViTriA];
            ViTriA++;
        }
        else { //khi gán xong a chuyển sang gán b vào nửa còn lại của c
            c[i]=b[ViTriB];
            ViTriB++;
        }
    }
    //sắp xếp nổi bọt
    int temp;
    for (i=0; i<2*n-1; i++) {
        for (j=i+1; j<2*n; j++) {
            if (c[j]<c[i]) {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\nmang tron duoc sap xep theo thu tu tang dan: \n");
    for (i=0; i<2*n; i++) {
        printf("%4d",c[i]);
    }
    return 0;
}
