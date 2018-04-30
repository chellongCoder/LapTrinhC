#include <stdio.h>
#include <stdlib.h>
//Bài tập 3: Tìm kết quả các phép toán cơ bản
//-1 + 4 * 6
//(35 + 5) % 7
 //14 + -4 * 6 / 11
 // 2 + 15 / 6 * 1 - 7 % 2
int main()
{
    printf("%d%c%d%c%d = %d",-1,'+',4,'*',6,(-1+4*6));
    printf("\n%d+%d*%d = %d ", -1, 4, 6, (-1+4*6));
    printf("\n(%d%c%d)%c%d = %d",35,'+',5,'%',7,((35+5)%7));
    printf("\n%d%c%d%c%d%c%d = %.2f",14,'+',-4,'*',6,'/',11,(float)(14+-4*6/11));
    printf("\n%d%c%d%c%d%c%d-%d%c%d = %d",2,'+',15,'/',6,'*',1,7,'%',2,(2+15/6*1-7%2));
    return 0;
}
