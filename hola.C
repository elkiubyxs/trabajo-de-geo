#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <mouse.h>
#include <stdio.h>

int rombo[] = {215, 186, 251, 228, 286, 182, 249, 145, 215, 186};

int pointInPolygon(int poly[], int n, int px, int py) {
    int i, j, c = 0;
    for (i = 0, j = n - 2; i < n; j = i, i += 2) {
        if (((poly[i + 1] > py) != (poly[j + 1] > py)) &&
            (px < (poly[j] - poly[i]) * (py - poly[i + 1]) / (poly[j + 1] - poly[i + 1]) + poly[i]))
            c = !c;
    }
    return c;
}

void btnDown(){
setcolor(LIGHTGRAY);
line(205,186,251,238);
line(251,238,296,182);
setcolor(RED);
line(296,182,249,135);
line(249,135,205,186);
}

void btnUp(){
setcolor(RED);
line(205,186,251,238);
line(251,238,296,182);
setcolor(LIGHTGRAY);
line(296,182,249,135);
line(249,135,205,186);
}

int checkmouse(){
		int r1,r2,r3,r4;
		int x = mxpos(1);
		int y = mypos(1);

	if (pointInPolygon(rombo, 10, x, y)) {
		if (mclick() == 1) {
			return 1;
		}
    }
	return 0;
}



void main(void){

int driver = DETECT, gm;
int rombo[] = {
215, 186
,251, 228
,286, 182
,249, 145,
215,186
};




initgraph(&driver,&gm, "");
cleardevice();
mver();

drawpoly(5,rombo);
setfillstyle(SOLID_FILL, CYAN);
floodfill(250,201,WHITE);

btnDown();

settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
outtextxy(247,172,"E");
outtextxy(247,184,"S");
outtextxy(247,196,"C");

do 	{
	if (checkmouse() == 1){
		btnUp();
	} else {
		btnDown();
	}
} while (!kbhit());

getch();
closegraph();


}