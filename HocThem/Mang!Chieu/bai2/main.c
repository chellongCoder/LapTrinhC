#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Bài tập 2: In mảng theo chiều đảo ngược
Viết chương trình C để nhập các phần tử mảng, sau đó in các phần tử mảng theo chiều đảo ngược.
Bài tập in mảng theo chiều đảo ngược là bài tập khá thường gặp trong nhiều ngôn ngữ lập trình.
Bài tập C này giúp bạn làm quen với các khái niệm: khai báo mảng, khởi tạo mảng, in các phần tử của mảng trong C.
*/
void NhapMang (float a[], int n) {
    int i;
    for (i=0; i<n; i++) {
        a[i] = 10.1*rand()/RAND_MAX;
    }
}

void XuatMang (float a[], int n) {
    int i;
    printf("\nmang sau kkhi dao nguoc la: ");
    for (i=n-1; i>=0; i--) {
        printf("%8.2f",a[i]);
    }
}
int main()
{
    srand(time(NULL));
    int n;
    printf("nhap vao so phan tu cua magn: ");
    scanf("%d",&n);
    float a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    return 0;
}
