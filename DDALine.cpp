#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class pixel
{
protected:
float x,y,x1,y1,x2,y2,c;
public:
pixel()
{
x=0;
y=0;
c=11;
}
pixel(inta,intb,int d)
{
x=a;
y=b;
c=d;
}

void get()
{
cout<<"\nEnter the coordiantes : ";
cin>>x>>y;
}

void put()
{
putpixel(x,y,10);
}
}p;

classline:public pixel
{
public:
floatdx,dy,m,steps,xi,yi;
void take()
{
cout<<"\nEnter the two points of the line :\nP1 : ";
cin>>x1>>y1;
cout<<"\nP2 : ";
cin>>x2>>y2;
}

voidlin()
{

dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
steps=abs(dx);
else
steps = abs(dy);

xi=dx/steps;
yi=dy/steps;
x=x1+0.5;
y=y1+0.5;
put();

for(inti=1;i<=steps;i++)
{
x=x+xi;
y=y+yi;
put();
delay(15);
}

}
}l;

int main()
{
intgd=DETECT,gm=DETECT;
initgraph(&gd,&gm,NULL);
l.take();
l.lin();
getch();
closegraph();
return 0;

}
