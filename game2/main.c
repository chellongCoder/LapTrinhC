#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <time.h>


//2. hàm tô màu
void TextColor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}
//3. hàm xóa màn hình
void XoaManHinh() {
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}
//4. hàm thay đổi kích cỡ màn hình console
/*
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width,
height, TRUE);
}
*/
enum trangthai {UP, DOWN, LEFT, RIGHT}; //kiểu dữ liệu trạng thái có 4 trạng thái là sang,lên, xuống, phải
 typedef struct {
    int x;
    int y;
}ToaDo;
typedef struct {
    ToaDo dot[31]; //tọa độ đốt rắn
    int n; //số đốt rắn
    enum trangthai tt;
} Snake;

void KhoiTao (Snake snake) {
    &snake;
    snake.n=1;
    snake.dot[0].x=10; //đốt 0 ở gốc tọa độ
    snake.dot[0].y=10;
    snake.tt=RIGHT;
}
void gotoxy(Snake snake) {
    //Snake snake;
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = {snake.dot.x,snake.dot.y};
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}
void HienThi (Snake snake) {
    XoaManHinh();
    //system("cls");
    int i;
    for (i=0; i<snake.n; i++) {
        gotoxy(snake);
        printf(" bjbjhb");
    }//printf("*");
}
int main()
{
    Snake snake;
    KhoiTao(snake);
    while (1) {
        //hiển thị
        HienThi(snake);
        //điều khiển

        //xử lí

        //end game
        Sleep(200);
    }
    return 0;
}
