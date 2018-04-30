#include <stdio.h>
#include <stdlib.h>
//Bài tập 10: Chia mảng thành mảng chẵn, mảng lẻ
//Viết chương trình C để nhập một mảng số nguyên và sau đó chia mảng này thành hai mảng: một mảng chẵn và một mảng lẻ rồi in kết quả trên màn hình.
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    printf("nhap %d phan tu vao mang: \n",n);
    int a[n];
    int i;
    for (i=0; i<n; i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    int MangChan[n];
    int MangLe[n];
    int chan=0,le=0;
    for (i=0; i<n; i++) {
        if (a[i]%2==0) {
            MangChan[chan]=a[i];
            chan++;
        }
        else {
            MangLe[le]=a[i];
            le++;
        }
    }
    for (i=0; i<chan; i++) {
        printf("%4d",MangChan[i]);
    }
    printf("\n");
    for (i=0; i<le; i++) {
        printf("%4d",MangLe[i]);
    }
    return 0;
}
