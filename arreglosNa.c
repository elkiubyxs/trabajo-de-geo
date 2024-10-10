#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>
#include <alloc.h>
#include <mouse.h>

void main()
{
	int imagentam;
	void *imagen;

	int driver = DETECT, modo;
	initgraph(&driver, &modo, "C:\\tc20\\bin");
	cleardevice();

	rectangle(48, 44, 573, 435);

  setcolor(WHITE);`
	rectangle(505, 50, 560, 70);
  setfillstyle(SOLID_FILL, RED);
	floodfill(507,60, WHITE);

  outtextxy(520,60, "X");

  setfillstyle(SOLID_FILL, WHITE);
	floodfill(205,442, WHITE);


  setcolor(WHITE);
	line(48, 392, 573, 392);


	/*boton*/
	bar(58, 403, 107, 423);

	imagentam = imagesize(10,10, 200, 439);
	imagen = malloc(imagentam);
	getimage(10,10, 200, 439, imagen);

	/*mouse*/
	mver();
  mlimit(1, 48, 44, 573, 435);
	do{
		if (minlimit(1, 58, 403, 107, 423) && mclick() == 1)
		{
			rectangle(57, 224, 98, 381);
			rectangle(109, 224, 150, 381);
		}
		else if (mclick() == 1)
		{
			putimage(10, 10, imagen, COPY_PUT);
		}
	}while (!kbhit());

	getch();
	free(imagen);
	closegraph();
	getch();
}