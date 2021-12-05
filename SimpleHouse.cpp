#include <graphics.h>
#include <iostream>
#include <conio.h>

int main()
{

int gd = DETECT, gm;

initgraph(&gd, &gm, "");

line(100, 100, 150, 50);
delay(500);

line(150, 50, 200, 100);
delay(500);

line(150, 50, 350, 50);
delay(500);

line(350, 50, 400, 100);
delay(500);

rectangle(100, 100, 200, 200);
delay(500);
rectangle(200, 100, 400, 200);
delay(500);
rectangle(130, 130, 170, 200);

delay(500);
rectangle(250, 120, 350, 180);
delay(500);

setfillstyle(2, 3);

floodfill(131, 131, WHITE);
floodfill(251, 121, WHITE);

setfillstyle(11, 11);

floodfill(201, 101, WHITE);
floodfill(101, 101, WHITE);

setfillstyle(8,12);
floodfill(150, 52, WHITE);

setfillstyle(8,12);
floodfill(163, 55, WHITE);

getch();
closegraph();
return 0;
}
