//DDA line Algorithm
//Cohen sutherland line clipping Algo
#include<graphics.h>
#include<stdio.h>
int main ()
{
	int gd = DETECT, gm, i, j;
	int x1 = 100, y1 = 100;
	int x2 = 500, y2 = 450;
	float dx, dy, l, xinc, yinc , x = x1, y = y1;
	initgraph(&gd, &gm, NULL);


	dx = x2 - x1, dy = y2 - y1;
	if (dx > dy) {
		l = dx;
	}
	else
		l = dy;
	xinc = dx / l;
	yinc = dy / l;
	putpixel(x, y, 3); //alloting clor to out first pixel
	for (int i = 0; i < l; i++) {
		line(220, 0, 220, 480);

		line(440, 0, 440, 480);

		line(0, 160, 640, 160);

		line(0, 320, 640, 320);
		x = x + xinc;
		y = y + yinc;
		//for color change if our pixel crosses the point
		if (x < 220 || x > 440 || y < 160 || y > 320)putpixel(x, y, 5);
		else
			putpixel(x, y, 8);
		delay(50);

	}
	getch();
	closegraph();
}