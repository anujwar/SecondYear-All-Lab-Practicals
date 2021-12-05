#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class pixel
{
protected:

int x,y,x1,y1,x2,y2,c;
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
intdx,dy,m,p;
void take()
{
cout<<"\nEnter the two points of the line :\nP1 : ";
cin>>x1>>y1;
cout<<"\nP2 : ";
cin>>x2>>y2;
}

voidlin()
{
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
p=2*dy-dx;

for(inti=x1;i<=x2;i++)
{
put();
delay(15);
x=x+1;

if(p<0) {
p=p+2*dy-2*dx;
}
else {
p=p+2*dy-2*dx;
y=y+1;
}
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
