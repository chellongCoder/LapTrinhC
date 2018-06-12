#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
char map[50][50];
// 1. hàm dua con tr? d?n 1 v? trí nào dó trên màn hình
void gotoxy(short x,short y) {
    HANDLE hConsoleOutput;
    COORD Cursor_an_Pos = { x-1,y-1};
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}
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
//4. hàm thay đổi kích cỡ  màn hình console

void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width,height, TRUE);
}

void VeHinh(int x, int y, char a[100], int color) {
    gotoxy(x,y);
    TextColor(color);
    fflush(stdin);
    puts(a);
    TextColor(7);
}
void TaoMenu (FILE *FILEin) {
        char c;
    FILEin=fopen("tenggame.txt", "rt");
    while (!feof(FILEin)) {
        TextColor(1+rand()%15);
        fscanf(FILEin,"%c",&c);
        Sleep(0);
        printf("%c",c);
    }
    fclose(FILEin);
	int tam=0;
	while(tam<12) {
	XoaManHinh();
    VeHinh(40,30,"=>ban co muon choi tro choi khong?<=",1+rand()%15);
    VeHinh(40,32,"<YES>\t\t<NO>",1+rand()%15);
	tam++;
	Sleep(200);
	}
}

void KiemTraPhim() {
    while (1){
        if (GetAsyncKeyState(VK_LEFT)) {
            printf("ban chon YES\n");
            VeHinh(40,32,"<YES>",11);
            VeHinh(40,32,"     \t\t<NO>",14);
            Sleep(500);
            system("cls");
            break;
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            printf("ban chon NO");
            VeHinh(40,22,"     \t\t<NO>",12);
            VeHinh(40,22,"<YES>\t\t    ",14);
            exit(0);
        }
    }
}

void VeDuongDua_1() {
    int i,j;
    for (i=0; i<50; i++) {
        map[i][0]='|'; //t?o du?ng bên trái
        map[i][49]='|'; //t?o du?ng bên ph?i
        if(i%2==0) {
            map[i][24]='|'; // t?o v?ch du?ng
        }
        for (j=1; j<49&&j!=24; j++) {
                map[i][j]=' ';
        }
    }
}
void VeDuongDua_2() {
    int i,j;
    for (i=0; i<50; i++) {
        map[i][0]='|'; //t?o du?ng bên trái
        map[i][49]='|'; //t?o du?ng bên ph?i
        if(i%2!=0) {
            map[i][24]='|'; // t?o v?ch du?ng
        }
        for (j=1; j<49&&j!=24; j++) {
                map[i][j]=' ';
        }
    }
}
void InDuongDua() {

    int i,j;
    for (i=0; i<50; i++) {
        printf("\t\t\t");
        for (j=0; j<50; j++) {
            if (j==0 || j==49) { // 2 bên duong dua
                TextColor(145);
                map[i][j]=' ';
                Sleep(0);
                printf("%c",map[i][j]);
                TextColor(7); //tra ve màu cu
            }
			else if (j==24) { //xóa lằn đường cũ đi
				TextColor(12);
				printf("%c",map[i][j]);
				map[i][j]=' ';
				TextColor(7);
			}
            else if (map[i][j]=='O' || map[i][j]=='#' || map[i][j]=='o') { // in ra cái xe màu khác
                TextColor(1+rand()%15);
                printf("%c",map[i][j]);
                TextColor(7);
            }
			else if (map[i][j]=='!') {
					TextColor(191);
					printf("%c",map[i][j]);
					TextColor(7);
			}
            //map[i][j]=' ';
            else  { // in ra nh?ng gì con lạii
                Sleep(0);
                printf("%c",map[i][j]);
                //TextColor(7);
            }
        }
        printf("\n");
    }
}
void VeXePlayer (int x, int y) {
    map[x][y]='O'; //khung xe
    map[x][y-1]='#'; //thân trái xe
    map[x][y+1]='#'; //thân ph?i xe
    map[x+1][y-1]='o'; // bánh xe trái du?i
    map[x+1][y+1]='o';//bánh xe ph?i du?i
    map[x-1][y-1]='o'; //basnh xe trái trên
    map[x-1][y+1]='o'; //bánh xe ph?i trên
}

//int *a; int *b;
void DiChuyenXe(int&x, int&y) {
	/*
		tọa độ góc trên bên trái (1,2)
		tọa độ góc dưới trái (48,2)
		tọa độ góc trên bên phải (1,47)
		tọa độ góc dưới phải (48,47)
		*/
	//&x,&y;
    //int x,y;
    // a=&x;  b=&y;
    //sang trái
	if (GetAsyncKeyState(VK_LEFT)) {
		if (y>2) {
			map[x][y]=' '; //khung xe
		map[x][y-1]=' '; //thân trái xe
		map[x][y+1]=' '; //thân phải xe
		map[x+1][y-1]=' '; // bánh xe trái dưới
		map[x+1][y+1]=' ';//bánh xe phải dưới
		map[x-1][y-1]=' '; //basnh xe trái trên
		map[x-1][y+1]=' '; //bánh xe ph?i trên
		y--;
		VeXePlayer(x,y);
		}	
	}
	
    //sang ph?i
    else if (GetAsyncKeyState(VK_RIGHT)) {
		if (y<47) {
			map[x][y]=' '; //khung xe
			map[x][y-1]=' '; //thân trái xe
			map[x][y+1]=' '; //thân ph?i xe
			map[x+1][y-1]=' '; // bánh xe trái du?i
			map[x+1][y+1]=' ';//bánh xe ph?i du?i
			map[x-1][y-1]=' '; //basnh xe trái trên
			map[x-1][y+1]=' '; //bánh xe ph?i trên
			y++;
			VeXePlayer(x,y);
		}  
    }
    //di xuống
    else if (GetAsyncKeyState(VK_DOWN)) {
		if (x<48) {
			 map[x][y]=' '; //khung xe
			map[x][y-1]=' '; //thân trái xe
			map[x][y+1]=' '; //thân ph?i xe
			map[x+1][y-1]=' '; // bánh xe trái du?i
			map[x+1][y+1]=' ';//bánh xe ph?i du?i
			map[x-1][y-1]=' '; //basnh xe trái trên
			map[x-1][y+1]=' '; //bánh xe ph?i trên
			x++;
			VeXePlayer(x,y);
		}  
    }
    else if (GetAsyncKeyState(VK_UP)) {
		if (x>1) {
			map[x][y]=' '; //khung xe
			map[x][y-1]=' '; //thân trái xe
			map[x][y+1]=' '; //thân ph?i xe
			map[x+1][y-1]=' '; // bánh xe trái du?i
			map[x+1][y+1]=' ';//bánh xe phảii duới
			map[x-1][y-1]=' '; //basnh xe trái trên
			map[x-1][y+1]=' '; //bánh xe ph?i trên
			x--;
			VeXePlayer(x,y);
		}
    }
}
typedef struct {
	int x1;
	int y1;
}XeComputer;
XeComputer X[10];
void VeXeComputer (XeComputer X[10]) {
//	XeComputer XeComputer1, XeComputer2, XeComputer3, XeComputer4, XeComputer5;
//	XeComputer1.y1=rand()%48;
//	XeComputer2.y1=rand()%48;
//	XeComputer3.y1=rand()%48;
//	XeComputer4.y1=rand()%48;
//	XeComputer5.y1=rand()%48;
//	map[x][y]='O'; //khung xe
//    map[x][y-1]='#'; //thân trái xe
//    map[x][y+1]='#'; //thân ph?i xe
//    map[x+1][y-1]='o'; // bánh xe trái du?i
//    map[x+1][y+1]='o';//bánh xe ph?i du?i
//    map[x-1][y-1]='o'; //basnh xe trái trên
//    map[x-1][y+1]='o'; //bánh xe ph?i trên

	//X[0].x1=2; //khong dc random
	//X[0].y1=10;
	//X[1].x1=3;
	//X[1].y1=36;
	//X[1].x1=(X[1].x1)+1;
	//X[0].x1=(X[0].x1)+1;
	int i;
	//X[0].x1=2; //khong dc random
	//X[0].y1=10;
	//X[1].x1=3;
	//X[1].y1=36;
//XoaManHinh();
	for (i=0; i<2; i++) {
		map[X[i].x1][X[i].y1]='!'; //khung xe
		map[X[i].x1][X[i].y1-1]='!'; //thân trái xe
		map[X[i].x1][X[i].y1+1]='!'; //thân ph?i xe
		map[X[i].x1+1][X[i].y1-1]='!'; // bánh xe trái du?i
		map[X[i].x1+1][X[i].y1+1]='!';//bánh xe ph?i du?i
		map[X[i].x1-1][X[i].y1-1]='!'; //basnh xe trái trên
		map[X[i].x1-1][X[i].y1+1]='!'; //bánh xe ph?i trên
	}
}
void DiChuyenXeComputer () {
	XeComputer X[10];
	int i;
	for (i=0; i<2; i++) {
		(X[i].x1)++;
	}
}
int main()
{
	srand(time(NULL));
	resizeConsole(900,1000);
    FILE *FILEin;
	TaoMenu(FILEin);
    KiemTraPhim();
    int x=35, y=25;
	int i;
	X[0].x1=2; //khong dc random
	X[0].y1=10;
	X[1].x1=2;
	X[1].y1=36;
//XoaManHinh();
	for (i=0; i<2; i++) {
		map[X[i].x1][X[i].y1]='!'; //khung xe
		map[X[i].x1][X[i].y1-1]='!'; //thân trái xe
		map[X[i].x1][X[i].y1+1]='!'; //thân ph?i xe
		map[X[i].x1+1][X[i].y1-1]='!'; // bánh xe trái du?i
		map[X[i].x1+1][X[i].y1+1]='!';//bánh xe phai du?i
		map[X[i].x1-1][X[i].y1-1]='!'; //basnh xe trái trên
		map[X[i].x1-1][X[i].y1+1]='!'; //bánh xe ph?i trên
	}
	
	//XeComputer XeComputer1, XeComputer2, XeComputer3, XeComputer4, XeComputer5;

    int a=0;
    while (1) {
        a++;
        if (a%2==0) {
            VeDuongDua_1();
        }
        else {
            VeDuongDua_2();
        }
		
        VeXePlayer(x,y);

		VeXeComputer(X);
       // XoaManHinh();
        InDuongDua();

        XoaManHinh();
      
        DiChuyenXe(x,y);
		//DiChuyenXeComputer();
		(X[0].x1)=(X[0].x1)+1;
		 
		(X[1].x1)=(X[1].x1)+1;
		XoaManHinh();
		
        Sleep(0); // xóa màn hình nhanh hon
        if (a>=30) {
            a=0;
		}
		if (X[0].x1>50) {
			X[0].x1=2; 
			X[0].y1=rand()%47;
		}
		if (X[1].x1>50) {
			X[1].x1=2; 
			X[1].y1=rand()%47;
		}
    }
   // VeDuongDua();
    //InDuongDua();
    _getch();
    return 0;
}
