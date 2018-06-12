//phÇn t­ thø ba, mét ®­êng trßn vµ mét h×nh qu¹t quÐt tõ 90 ®Õn 360 ®é.
# include "graphics.h"
#include "stdio.h"
#include "conio.h"
main()
	{
		int md=0,mode;
		initgraph(&md,&mode,"C:\\TC\\BGI");
		setbkcolor(BLUE);
		setcolor(YELLOW);
		setfillstyle(SOLID_FILL,RED);;
		arc(160,50,0,90,45);
		circle(160,150,45);
		pieslice(480,150,90,360,45);
		getch();
		closegraph();
	}
