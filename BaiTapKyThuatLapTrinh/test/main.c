#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1) {
        printf("NGON NGU LAP TRINH\n");
        char c=_getch();

        if(c=='c') {
            printf("TURBO C\n");
            char choice = _getch();
            if(choice) {
                break;
            }
        }
        if(c=='p') {
            printf("TURBO Pascal\n");
            char choice = _getch();
            if(choice) {
                break;
            }
        }
    }
    return 0;
}
