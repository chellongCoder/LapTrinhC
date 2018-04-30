#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
câu 1: Viết chương trình
    -đầu tiên in ra dòng chữ
NGON NGU LẠP TRINH
    -nếu không bấm phím hoặc bấm 1 phím khác C và P thì dòng chữ tiếp tục hiện ra.
    nếu bấm C thì chương trình in ra dòng chữ TURBO C
    nếu bấm P thì dòng chữ in ra là TURBO PASCAL
    -bấm tiếp phím nữa thì chương trình kết thúc
*/
int main()
{
    char key;
    while (1) {
        printf("NGON NGU LAP TRINH\n");
        if (_kbhit()) {
            key=_getch();
            if (key=='C' || key=='c') {
                printf("\nTURBO C");
            }
            if (key=='P' || key=='p') {
                printf("\nTURBO PASCAL");
            }
            printf("\nan phim bat ki de ket thuc!");
            key=_getch();
            break;
        }
    }
    return 0;
}
