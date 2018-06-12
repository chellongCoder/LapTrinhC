#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include "console.h"
#include <time.h>
#define consoleWidth	25
#define consoleHeight	25


char map[60][60];
void XoaManHinh() {
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width,height, TRUE);
}

/*=================================================*/
enum TrangThai {UP, DOWN, LEFT, RIGHT}; // kiểu dữ liệu trạng thái
int tam=1; //biến tạm
typedef struct {
	int x; //hoành độ
	int y;//tung độ
}ToaDo;
typedef struct {
	ToaDo dot[31]; //đôt có tọa độ x,y
	int n; // n đốt
	enum TrangThai tt;
}Snake;
typedef struct {
	ToaDo td;
}HoaQua;
void KhoiTao (Snake &snake, HoaQua &hq) {
	//=======rắn=======
	snake.n=3;
	snake.dot[0].x=0;
	snake.dot[0].y=0;
	snake.dot[1].x=0;
	snake.dot[1].y=1;
	snake.dot[2].x=0;
	snake.dot[2].y=2;
	snake.tt=RIGHT;
	//=====hoa quả=======
	hq.td.x=10;
	hq.td.y=10;
}

void HienThi (Snake snake, HoaQua hq) {
	
	//XoaManHinh();
	clrscr();
	//system("cls");
	int i;
	/*for (i=0; i<60; i++) {
		gotoXY(i,0);
		TextColor(176);
		putchar(247);
		TextColor(7);
	}*/
	for (i=0; i<consoleHeight; i++){ // in ra giới hạn biên
		gotoXY(60,i);
		TextColor(176);
		putchar(176);// kí tự 179 là cột dọc
		TextColor(7);
	}
	
	gotoXY(hq.td.x, hq.td.y);//vẽ hoa quả ở tọa độ khởi tạo
	if (tam%3!=0) {
		putchar('a');
	}
	if (tam%3==0) {
		TextColor(5);
		putchar('A'); //xuất hiện quả to
		TextColor(7);
	}
	for (i=0; i<snake.n; i++) {
		gotoXY(snake.dot[i].x, snake.dot[i].y);
		TextColor(1+rand()%15);
		if (i==0) {
			putchar('%');
		}
		else {
		putchar('*');
		}
		TextColor(7);
	}	
}
//void VeDuongDua() {
//    int i,j;
//    for (i=0; i<50; i++) {
//        map[i][0]='|'; //t?o du?ng bên trái
//        map[i][49]='|'; //t?o du?ng bên ph?i
//        for (j=1; j<49; j++) {
//                map[i][j]=' ';
//        }
//    }
//}
//void InDuongDua() {
//
//    int i,j;
//    for (i=0; i<50; i++) {
//        //printf("\t\t\t");
//        for (j=0; j<50; j++) {
//            if (j==0 || j==49) { // 2 bên duong dua
//                TextColor(145);
//                map[i][j]=' ';
//                Sleep(0);
//                printf("%c",map[i][j]);
//                TextColor(7); //tra ve màu cu
//			}
//			if (map[i][j]=='*') {
//				printf("*",map[i][j]);
//			}
//    
//            //map[i][j]=' ';
//            else  { // in ra nh?ng gì con lạii
//                Sleep(0);
//                printf("%c",map[i][j]);
//                //TextColor(7);
//            }
//        }
//        printf("\n");
//    }
//}
void DieuKhien (Snake &snake) {
	int i;
	//truyền  trạng thái cho đốt cũ
	for (i=snake.n-1; i>0; i--) {
		snake.dot[i]=snake.dot[i-1];
	}
	
	if (_kbhit()) { //nếu phát hiện phím nhấn
		int key=_getch();
		if (key=='A' || key=='a') {
			snake.tt=LEFT; 
		}
		else if (key=='D' || key=='d') {
			snake.tt=RIGHT; 
		}
		else if (key=='W' || key=='w') {
			snake.tt=UP; 
		}
		else if (key=='S' || key=='s') {
			snake.tt=DOWN; 
		}
	}
	if (snake.tt==LEFT) {
		snake.dot[0].x--;
	}
	else if (snake.tt==RIGHT) {
		snake.dot[0].x++;
	}
	else if (snake.tt==UP) {
		snake.dot[0].y--;
	}
	if (snake.tt==DOWN) {
		snake.dot[0].y++;
	}
	
	if (GetAsyncKeyState(VK_LEFT)) {
		snake.dot[0].x--;
	}
	if (GetAsyncKeyState(VK_RIGHT)) {
		snake.dot[0].x++;
	}
	if (GetAsyncKeyState(VK_UP)) {
		snake.dot[0].y--;
	}
	if (GetAsyncKeyState(VK_DOWN)) {
		snake.dot[0].y++;
	}
}
//trả về -1 nếu thua game
int XuLy(Snake &snake, HoaQua &hq) {
	if (snake.dot[0].x == hq.td.x && snake.dot[0].y == hq.td.y) {
		tam++;
		snake.n++;
		int i;
		if (tam%3!=0) {
			for (i=0; i<snake.n-1; i++) {
				snake.dot[i]=snake.dot[i+1];
			}
		}
		else {
			snake.n++;
			for (i=0; i<snake.n-1; i++) {
			snake.dot[i]=snake.dot[i+1];
			}
		}
		/*if (snake.tt==LEFT) {
		snake.dot[0].x--;
		}
		else if (snake.tt==RIGHT) {
			snake.dot[0].x++;
		}
		else if (snake.tt==UP) {
			snake.dot[0].y--;
		}
		if (snake.tt==DOWN) {
			snake.dot[0].y++;
		}*/
		hq.td.x=rand()%consoleWidth; // x là chiều ngang
		hq.td.y=rand()%consoleHeight; // y là chiều dọc

		if (snake.dot[0].x<0 || snake.dot[0].x>=consoleWidth || snake.dot[0].y<0 || snake.dot[0].y>=consoleHeight) {
			return -1;
		}
	}
}
int main () 
{
	srand(time(NULL));
	//resizeConsole(800,600);
	Snake snake;
	HoaQua hq;
	KhoiTao(snake,hq);
	while (1) {
		//hiển thị 
		HienThi(snake,hq);
//		VeDuongDua();
	//	InDuongDua();
		//điều khiển
		DieuKhien(snake);
		//xử lí
		int ma=XuLy(snake,hq);
		if (ma==-1) {
			gotoXY(consoleWidth+1,14);
			printf("thua roi hehe");
				break;
			
		}
		//XoaManHinh();
		//end game
		
		Sleep(70);
	}
	return 0;
}