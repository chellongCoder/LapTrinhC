#include <stdio.h>
#include <stdlib.h>
//Bài tập 6: In các phần tử duy nhất của mảng
//Viết chương trình C để nhập các phần tử vào trong một mảng, sau đó in các phần tử là duy nhất trong mảng trên màn hình hiển thị
//(các phần tử là duy nhất nếu không có phần tử khác giống nó).
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    printf("\nnhap %d phan tu vao mang\n",n);
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
    int dem;
    printf("\ncac phan tu duy nhat duoc tim thay la: \n");
    for (i=0; i<n; i++) {
        dem=0;
        for (j=n-1; j>=0; j--) { //duyệt từ cuối mảng lên đầu
            if (a[i]==a[j]) { //nếu bằng nhau thì đếm số phần tử bằng nhau
                dem++;
            }
        }
        if (dem==1) { //nếu đếm đc chỉ có 1 phần tử
            printf("%4d",a[i]);
        }
    }
    return 0;
}
