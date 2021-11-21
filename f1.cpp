#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	//int gd=DETECT, gm;
	//initgraph(&gd, &gm, "c:\\tc\\bgi");
	initwindow(800,900);
	circle(0,0,50);
	rectangle(30,40,100,100);
	while(!kbhit())
	{
		delay(100);
	}
	return(0);
}
