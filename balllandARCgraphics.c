//circle motion on arc path
#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main ()
{
	int gd = DETECT, gm, i, j;
	int x1 = 100, y1 = 100;
	int x2 = 500, y2 = 450;
	float dx, dy, l, xinc, yinc , x = x1, y = y1;
	initgraph(&gd, &gm, NULL);

	for (i = 0; i < 180; i++)
	{
		line(0, 200, 170, 200);
		line(470, 200, 640, 200);
		arc(320, 200, 180, 360, 150);
		x1 = 320 + 150 * cos((i * 3.14) / 180);
		y1 = 200 + 150 * sin((i * 3.14) / 180);
		circle(x1, y1, 5);
		line(320, 200, x1, y1);
		delay(50);
		cleardevice(); //removes previous instances
	}

	getch();
	closegraph();
}