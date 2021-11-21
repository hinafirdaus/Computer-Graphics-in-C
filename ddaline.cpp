#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int abs(int);
int main()
{
initwindow(500,500,"DDA Line algorithm");
int dx,dy, x1=0,y1=0,x2=300,y2=150,steps;
dx=y2-y1;
dy=x2-x1;

if(abs(dx)>abs(dy))
{
	steps=abs(dx);
}
else
{
	steps=abs(dy);
}
float xinc=dx/(float)steps;
float yinc=dy/(float)steps;
float x=x1;
float y=y1;
for(int i=0;i<=steps;i++)
{
	putpixel(round(x), round(y),WHITE);
	x=x+xinc;
	y=y+yinc;
}
delay(100000);
}
int abs(int n)
{
	if (n<0)
	{
		n=n*(-1);
	}
	return n;
}
