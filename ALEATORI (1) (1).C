
#include <graphics.h>


void pantalla(void);
void caritas(void);
void rectangulo(int x, int y, int width, int height, int radius);
void wsp();
void reloj();
void youtube();
void mensajes();



void pantalla(void)
{
	/*cambiar color de pantalla a negro*/
	setcolor(CYAN);
	setfillstyle(1, BLACK);
	rectangle(0,0,getmaxx(),getmaxy());
	floodfill(203,1,BLACK);


	/*parte mas clara*/
	setcolor(7);
	setfillstyle(1, 7);
	rectangle(180,0,433,getmaxy());
	floodfill(190,10,7);
}
void caritas(void)
{
	/*Caras*/
	setcolor(BLACK);
	setlinestyle(SOLID_LINE, 1, THICK_WIDTH);
	setfillstyle(1, 7);
	circle(330,268, 40);
	floodfill(330, 268, BLACK);

    setcolor(BLACK);
	setlinestyle(SOLID_LINE, 1, THICK_WIDTH);
	setfillstyle(1, 7);
	circle(265, 268, 40);
	floodfill(265, 268, BLACK);

    setlinestyle(SOLID_LINE, 1, THICK_WIDTH);
	arc(245, 278, 180, 360,6);

    setlinestyle(SOLID_LINE, 1, THICK_WIDTH); /*Grosor del dibujo*/
	arc(350, 282, 0, 180,6);

    setcolor(BLACK);
	setfillstyle(1, BLACK);
	circle(235,257, 2);
	floodfill(235, 257, BLACK);

    setcolor(BLACK);
	setfillstyle(1, BLACK);
	circle(250,257, 2);
	floodfill(250, 257, BLACK);

    setcolor(BLACK);
	setfillstyle(1, BLACK);
	circle(343,257, 2);
	floodfill(343, 257, BLACK);

    setcolor(BLACK);
	setfillstyle(1, BLACK);
	circle(357,257, 2);
	floodfill(357, 257, BLACK);
}

void rectangulo(int x, int y, int width, int height, int radius)
{


	line(x + radius, y, x + width - radius, y);
	line(x + radius, y + height, x + width - radius, y + height);
	line(x, y + radius, x, y + height - radius);
	line(x + width, y + radius, x + width, y + height - radius);

	arc(x + radius, y + radius, 90,180, radius);
	arc(x + width - radius, y + radius, 0, 90, radius);
	arc(x + radius, y + height - radius, 180, 270, radius);
	arc(x + width- radius, y +  height - radius, 270, 360, radius);


}

void wsp()
{
	int w[] = {323, 60, 325, 60, 326, 61, 326, 62, 324, 63, 323, 63, 321, 63,
				320, 63, 318, 61, 317, 61, 316, 58, 316, 57, 316, 56, 316, 55,
				316, 54, 318, 53, 319, 54, 319, 55, 318, 57, 318, 58,319, 59,
				 320, 60, 321, 60, 323, 60};


	setcolor(WHITE);
	setlinestyle(SOLID_LINE, 1, THICK_WIDTH);
	setfillstyle(1, WHITE);
	drawpoly(24, w);
	floodfill(324, 61, WHITE);
}

void geo()
{
	setcolor(BLACK);
	setlinestyle(SOLID_LINE, 1, THICK_WIDTH);
	setfillstyle(1, 0);
	circle(380, 58, 10);
	floodfill(320 ,110, BLACK);
}

void youtube()

{
	int play[] = {316, 106, 316, 115, 322, 111, 316, 106};
	setcolor(RED);
	setfillstyle(1, RED);
	rectangulo(302, 100, 35, 20, 6);
	floodfill(326, 112, RED);

	setcolor(WHITE);
	setfillstyle(1, WHITE);
	drawpoly(4, play);
	floodfill(318, 111, WHITE);
}

void mensajes()
{
	int telefono[] = {275, 436, 276, 436, 276, 434, 275, 433, 275, 431, 273, 429,
						272, 429, 270, 431, 269, 423,270, 435,271, 437,273, 439,
						275, 442, 276, 444, 278, 446, 281, 447,283, 449,286, 450,289, 448,
						290, 446, 288, 444, 285, 443, 283, 443, 279, 442,277, 440,275, 436};


	setcolor(15);

	setfillstyle(1, 15);
	circle(330,440, 15);
	floodfill(331, 440, 15);


	setcolor(15);
	setfillstyle(1, 15);
	drawpoly(26, telefono);
	floodfill(277, 442, 15);
}

void safari()
{
	

	setcolor(BLUE);
	setlinestyle(SOLID_FILL, 1, THICK_WIDTH);
	setfillstyle(1,BLUE);
	circle(230, 441, 18);
	floodfill(230, 441, WHITE);









}

int main() {
/*	int triangulo [400,87,]*/
	int saf1[]= {230,438,232,445,250,429,230,438};
	int saf2[]= {230,438,232,445,210,455,230,438};

	int wapu[] ={309,64,306,72,315,72,310,65};
	int triangulo[] = {382,56,390,43,398,56,382,56};

    int driver = DETECT, modo;
    initgraph(&driver, &modo, "C:\\TC20\\BIN");
    pantalla();
	caritas();



	setcolor(8);
	setfillstyle(1, 8);
	rectangulo(190, 38, 90, 90, 5);
	floodfill(200, 40, 8);

	setcolor(GREEN);
	setfillstyle(1, GREEN);
	rectangulo(300, 38, 40, 40, 5);
	floodfill(308, 49, GREEN);

	setcolor(WHITE);
	setfillstyle(1,WHITE);
	drawpoly(4,wapu);
	floodfill(308,71,WHITE);

	setcolor(15);
	setfillstyle(1, 15);
	rectangulo(360, 38, 40, 40, 5);
	floodfill(378, 64, 15);


	setcolor(WHITE);
	setfillstyle(1, BLACK);
	rectangulo(300, 90, 40, 40, 5);
	floodfill(311, 98, WHITE);

	/*app notas*/
	setcolor(BLACK);
	setfillstyle(1, BLACK);
	rectangulo(360, 90, 40, 40, 5);
	floodfill(378, 111, BLACK);

	setcolor(8);
	setfillstyle(1, 8);
	rectangulo(190, 410, 230, 60, 15);
	floodfill(355, 442, 8);

	setcolor(WHITE);
	outtextxy(200,6, "12:30");
	setcolor(WHITE);
	outtextxy(200,41, "Managua");
	setcolor(WHITE);
	settextstyle(DEFAULT_FONT, HORIZ_DIR,2);
	outtextxy(200,53, "27");

	settextstyle(DEFAULT_FONT, HORIZ_DIR,1);
	outtextxy(195,105, "lluvia");
	settextstyle(SMALL_FONT, HORIZ_DIR,2);
	outtextxy(193,114, "Max.:28  min.: 22");

	circle(232, 53, 2);
	circle(219, 115, 1);
	circle(256, 115, 1);


	setcolor(GREEN);
	setfillstyle(1,GREEN);
	circle(320,58,12);
	floodfill(321,58,GREEN);

	setcolor(WHITE);
	setfillstyle(1, GREEN);
	circle(320,58,14);
	circle(320,58,13);
	floodfill(322, 53, WHITE);

	/*ponerle color a la app de telefono*/
	setcolor(WHITE);
	setfillstyle(1,WHITE);
	rectangulo(210, 420, 40, 40, 5);
	floodfill(237, 432, WHITE);

	/*ponerle color a safari*/
	setcolor(LIGHTGREEN);
	setfillstyle(1, LIGHTGREEN);
	rectangulo(260, 420, 40, 40, 5);
	floodfill(275, 435, LIGHTGREEN);

	/*ponerle color a mensajeria*/
	setcolor(10);
	setfillstyle(1, 10);
	rectangulo(310, 420, 40, 40, 5);
	floodfill(338, 435, 10);

	rectangulo(360, 420, 40, 40, 5);

	setcolor(8);
	setfillstyle(1, 8);
	rectangulo(285, 380, 40, 10, 6);
	floodfill(303, 383, 8);

	setcolor(WHITE);
	circle(290, 385, 2);
	putpixel(292,388,WHITE);

	setcolor(WHITE);
	settextstyle(SMALL_FONT, HORIZ_DIR,2);
	outtextxy(296,381,"Buscar");

	/*WIDGEST*/
	setcolor(BLUE);
	setlinestyle(SOLID_LINE, 1, THICK_WIDTH);
	setfillstyle(1, BLACK);
	rectangulo(365, 96, 30, 30, 6);
	floodfill(371, 104, BLUE);

	setcolor(RED);
	drawpoly(4,saf1);

	setcolor(BLACK);
	drawpoly(4,saf2);

	circle(378,440,15);
    arc(378,451, 0, 180, 8);
	circle(378,437,3);

	line(395,421,395,459);
	line(395,430,398,430);
	line(395,439,398,439);
	line(395,448,398,448);

	setcolor(BLACK);
	drawpoly(4,triangulo);
	setfillstyle(SOLID_FILL, MAGENTA);
	floodfill(390, 51, BLACK);

	












	wsp();
	geo();
	youtube();
	mensajes();
	safari();

    getch();
    closegraph();
    return 0;
}