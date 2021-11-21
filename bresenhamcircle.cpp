#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int drawcircle(int,int,int,int);
int circlebres(int,int,int);
int main()
{
	initwindow(500,500,"Bresenham Circle algorithm");
int xc=100,yc=100, r=80;
circlebres(xc,yc,r);
delay(100000);
}
int drawcircle(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc-y,yc+x,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc-y,yc-x,WHITE);
	}
	int circlebres(int xc,int yc, int r)
	{
		int x=0, y=r,d;
		d=3-2*r;
		drawcircle(xc,yc,x,y);
		while(y>=x)
		{
			x++;
			if(d>0)
			{
				y--;
				d=d+4*(x-y)+10;
			}
			else
			{
				d=d+4*x+6;
			}
			drawcircle(xc,yc,x,y);

		}
	}
