#include <stdio.h>
#include <stdlib.h>
//Bài Tập 9: Yêu cầu Bài tập C
//Nhập tọa độ (x, y) của một điểm và thông báo điểm đó ở góc phần tư nào trong Hệ tọa độ.
int main()
{
    int x,y;
    printf("nhap vao hoanh do x: ");
    scanf("%d",&x);
    printf("nhap vao tung do y: ");
    scanf("%d",&y);
    if (x>0 && y>0) {
        printf("diem co toa do (%d, %d) nam o goc phan tu thu I\n",x,y);
    }
    else if (x<0 && y>0) {
        printf("diem co toa do (%d, %d) nam o goc phan tu thu II\n",x,y);
    }
    else if (x<0 && y<0) {
        printf("diem co toa do (%d, %d) nam o goc phan tu thu III\n",x,y);
    }
    else if (x>0 && y<0) {
        printf("diem co toa do (%d, %d) nam o goc phan tu thu IV\n",x,y);
    }
    else {
        printf("diem co toa do (%d, %d) nam o goc toa do\n",x,y);
    }
    return 0;
}
