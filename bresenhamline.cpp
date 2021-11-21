#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int abs(int);

int main()
{
	initwindow(500,500,"Bresenham Line Algorithm");
	int x1=0,y1=0,x2=200,y2=200, dx,dy,p,twody,x,y,xend,twodydx; 
	dx=abs(x1-x2);
	dy=abs(y1-y2);
	p=2*dy-dx;
	twody=2*dy;
	twodydx=2*(dy-dx);
	if(x1>x2)
	{
		x=x2;
		y=y2;
		xend=x1;
	}
	else
	{
		x=x1;
		y=y1;
		xend=x2;
		}
		putpixel(x,y,WHITE);
		while(x<xend)
		{
			x++;
			if(p<0)
			{
			p=p+twodydx;	
					}
					else
					{
						y++;
						p=p+twodydx;}
					
					putpixel(x,y,WHITE);
		}
		delay(10000);
	}

int abs(int n)
{
	if(n<0)
	{
		n=n*(-1);
	}
	return n;
}
