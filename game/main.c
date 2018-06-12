#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
char map[50][50];
// 1. hàm đưa con trỏ đến 1 vị trí nào đó trên màn hình
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
    VeHinh(40,20,"=>ban co muon choi tro choi khong?<=",14);
    VeHinh(40,22,"<YES>\t\t<NO>",14);
}
void VeHinh(int x, int y, char a[100], int color) {
    gotoxy(x,y);
    TextColor(color);
    fflush(stdin);
    puts(a);
    TextColor(7);
}
void KiemTraPhim() {
    while (1){
        if (GetAsyncKeyState(VK_LEFT)) {
            printf("ban chon YES\n");
            VeHinh(40,22,"<YES>",11);
            VeHinh(40,22,"     \t\t<NO>",14);
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
    for (i=0; i<30; i++) {
        map[i][0]='|'; //tạo đường bên trái
        map[i][29]='|'; //tạo đường bên phải
        if(i%2==0) {
            map[i][14]='|'; // tạo vạch đường
        }
        for (j=1; j<29&&j!=14; j++) {
                map[i][j]=' ';
        }
    }
}
void VeDuongDua_2() {
    int i,j;
    for (i=0; i<30; i++) {
        map[i][0]='|'; //tạo đường bên trái
        map[i][29]='|'; //tạo đường bên phải
        if(i%2!=0) {
            map[i][14]='|'; // tạo vạch đường
        }
        for (j=1; j<29&&j!=14; j++) {
                map[i][j]=' ';
        }
    }
}
void InDuongDua() {

    int i,j;
    for (i=0; i<30; i++) {
        printf("\t\t\t");
        for (j=0; j<30; j++) {
            if (j==0 || j==29) { // 2 bên đường đua
                TextColor(145+rand()%15);
                map[i][j]=' ';
                Sleep(0.5);
                printf("%c",map[i][j]);
                TextColor(7); //trả về màu cũ
            }
            else if (map[i][j]=='O' || map[i][j]=='#' || map[i][j]=='o') { // in ra cái xe màu khác
                TextColor(1+rand()%15);
                printf("%c",map[i][j]);
                TextColor(7);
            }
            //map[i][j]=' ';
            else  { // in ra những gì con lại
                Sleep(0.5);
                printf("%c",map[i][j]);
                //TextColor(7);
            }
        }
        printf("\n");
    }
}
void VeXePlayer (int x, int y) {
    &x;
    &y;
    map[x][y]='O'; //khung xe
    map[x][y-1]='#'; //thân trái xe
    map[x][y+1]='#'; //thân phải xe
    map[x+1][y-1]='o'; // bánh xe trái dưới
    map[x+1][y+1]='o';//bánh xe phải dưới
    map[x-1][y-1]='o'; //basnh xe trái trên
    map[x-1][y+1]='o'; //bánh xe phải trên
}

//int *a; int *b;
void DiChuyenXe(int x, int y) {
    &x;
    &y;
    //int x,y;
    // a=&x;  b=&y;
    //sang trái
    if (GetAsyncKeyState(VK_LEFT)) {
        map[x][y]=' '; //khung xe
        map[x][y-1]=' '; //thân trái xe
        map[x][y+1]=' '; //thân phải xe
        map[x+1][y-1]=' '; // bánh xe trái dưới
        map[x+1][y+1]=' ';//bánh xe phải dưới
        map[x-1][y-1]=' '; //basnh xe trái trên
        map[x-1][y+1]=' '; //bánh xe phải trên
        y--;

        VeXePlayer(x,y);
    }
    //sang phải
    else if (GetAsyncKeyState(VK_RIGHT)) {
        map[x][y]=' '; //khung xe
        map[x][y-1]=' '; //thân trái xe
        map[x][y+1]=' '; //thân phải xe
        map[x+1][y-1]=' '; // bánh xe trái dưới
        map[x+1][y+1]=' ';//bánh xe phải dưới
        map[x-1][y-1]=' '; //basnh xe trái trên
        map[x-1][y+1]=' '; //bánh xe phải trên
        y++;
        VeXePlayer(x,y);
    }
    //đi xuống
    else if (GetAsyncKeyState(VK_DOWN)) {
        map[x][y]=' '; //khung xe
        map[x][y-1]=' '; //thân trái xe
        map[x][y+1]=' '; //thân phải xe
        map[x+1][y-1]=' '; // bánh xe trái dưới
        map[x+1][y+1]=' ';//bánh xe phải dưới
        map[x-1][y-1]=' '; //basnh xe trái trên
        map[x-1][y+1]=' '; //bánh xe phải trên
        x++;
        VeXePlayer(x,y);
    }
    else if (GetAsyncKeyState(VK_UP)) {
        map[x][y]=' '; //khung xe
        map[x][y-1]=' '; //thân trái xe
        map[x][y+1]=' '; //thân phải xe
        map[x+1][y-1]=' '; // bánh xe trái dưới
        map[x+1][y+1]=' ';//bánh xe phải dưới
        map[x-1][y-1]=' '; //basnh xe trái trên
        map[x-1][y+1]=' '; //bánh xe phải trên
        x--;
        VeXePlayer(x,y);
    }
}
int main()
{
    srand(time(NULL));
    FILE *FILEin;
    TaoMenu(FILEin);
    KiemTraPhim();
    int x=25, y=15;
    //XoaManHinh();
    int a=0;
    VeXePlayer(x,y);
    while (1) {
        a++;
        if (a%2==0) {
            VeDuongDua_1();
        }
        else {
            VeDuongDua_2();
        }
       // XoaManHinh();
        InDuongDua();
        XoaManHinh();
       //system("cls");
        DiChuyenXe(x,y);
        Sleep(10); // xóa màn hình nhanh hơn
        if (a>=30) {
            a=0;
        }
    }
   // VeDuongDua();
    //InDuongDua();
    getch();
    return 0;
}
