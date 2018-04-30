#include <stdio.h>
#include <stdlib.h>
//Bài tập 16: Kiểm tra lợi nhuận, thua lỗ
//Yêu cầu bài tập C này là nhập chi phí và doanh thu từ đó kết luận là lợi nhuận hay thua lỗ và với bao nhiêu.
int main()
{
    int GiaBan, ChiPhi;
    printf("nhap vao chi phi: ");
    scanf("%d",&ChiPhi);
    printf("nhap voa gia ban: ");
    scanf("%d",&GiaBan);
    if (ChiPhi<GiaBan) {
        printf("\nban thu duoc loi nhuan: %d",(GiaBan-ChiPhi));
    }
    else if (ChiPhi>GiaBan){
        printf("\nban bi lo: %d",(ChiPhi-GiaBan));
    }
    else {
        printf("\n ban hoa von.");
    }
    return 0;
}
