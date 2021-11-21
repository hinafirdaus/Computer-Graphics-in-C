#include<stdio.h>
#include<graphics.h>
int main()
{
initwindow(600,600,"Shapes");
	//printf("Rectangle: ");
	rectangle(50,30,160,80); //rectangle(x,y,length,width);
	//line(x1,y1,x2,y2)
	line(50,100,300,100);
	rectangle(110,110,200,200);
	delay(600000);
	/*int gd=DETECT, gm;
	initgraph(&gd, &gm,NULL);
	printf("Rectangle: ");
	rectangle(50,30,200,100);
	delay(6000);
	closegraph();*/
}
