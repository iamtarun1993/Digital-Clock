#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<dos.h>

void main()
{
	int gd=DETECT,gmode;
	int i=1;
	char msg[10];
	struct date dt;
	struct time tm;
	initgraph(&gd,&gmode,"C://TC//BGI");
	while(!kbhit())
	{
			setbkcolor(WHITE);
			setcolor(5);
			settextstyle(8,HORIZ_DIR,6);
			setcolor(5);
			outtextxy(120,20,"DIGITAL CLOCK");
			setcolor(8);
			rectangle(20,20,getmaxx()-20,getmaxy()-20);
			gettime(&tm);
			getdate(&dt);
			settextstyle(1,HORIZ_DIR,5);
			setcolor(12);
			outtextxy(50,100,"YEAR");
			outtextxy(250,100,"MONTH");
			outtextxy(475,100,"DATE");
			outtextxy(50,300,"HOUR");
			outtextxy(250,300,"MINUTE");
			outtextxy(450,300,"SECOND");
			settextstyle(6,HORIZ_DIR,4);
			setcolor(9);
			sprintf(msg,"%d",dt.da_year);
			outtextxy(75,200,msg);
			sprintf(msg,"%d",dt.da_mon);
			outtextxy(300,200,msg);
			sprintf(msg,"%d",dt.da_day);
			outtextxy(515,200,msg);
			sprintf(msg,"%d",tm.ti_hour);
			outtextxy(75,400,msg);
			sprintf(msg,"%d",tm.ti_min);
			outtextxy(300,400,msg);
			sprintf(msg,"%d",tm.ti_sec);
			outtextxy(515,400,msg);
			i=i+1;
			if(i==13)
				i=1;
			delay(750);
			cleardevice();

	}
	getch();
}
