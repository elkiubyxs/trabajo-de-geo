#include <graphics.h>
#include <stdio.h>


void draw_rounded_rectangle(int x, int y, int width, int height, int radius) {
    setcolor(WHITE);
    line(x + radius, y, x + width - radius, y);
    line(x + radius, y + height, x + width - radius, y + height);
    line(x, y + radius, x, y + height - radius);
    line(x + width, y + radius, x + width, y + height - radius);

    arc(x + radius, y + radius, 90, 180, radius);
	arc(x + width - radius, y + radius, 0, 90, radius);
	arc(x + radius, y + height - radius, 180, 270, radius);
    arc(x + width - radius, y + height - radius, 270, 360, radius);
}
void draw_icon(int x, int y, int size, char *label, int fill_color) {

    setcolor(WHITE);
    outtextxy(x + 5, y + size + 10, label);
}

int main() {

	int fondo[] = {
90, 257
,81, 276
,99, 289
,127, 289
,140, 273
,128, 253
,95, 196
,108, 250
,127, 191
,90,257
};

        int x = 0, y = 0;
	int brad1[] = {41,49,69,41,41,41,41,49};
	int brad2[] = {41,69,70,59,70,69,41,69};
    int dib2[] = {336,179,280,224,351,234};

	int Px,px;
    int py;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


    /*dibujar los recuadros de las apps*/
	draw_rounded_rectangle(40, 40, 30, 30, 5);
    draw_rounded_rectangle(100, 40, 30, 30, 5);
    draw_rounded_rectangle(160, 40, 30, 30, 5);
    draw_rounded_rectangle(220, 40, 30, 30, 5);

    draw_rounded_rectangle(40, 90, 30, 30, 5);

    rectangle(44,100,54,110);
    setfillstyle(SOLID_FILL, BLUE);
	floodfill(45,101 ,WHITE);

    rectangle(50,95,66,115);
    setfillstyle(SOLID_FILL, BLUE);
	floodfill(51,110 ,WHITE);

    for(py = 96; py < 115; py ++){
        putpixel(51,py,BLUE);
        putpixel(52,py,BLUE);
        putpixel(53,py,BLUE);
        putpixel(54,py,BLUE);
        putpixel(55,py,BLUE);
        putpixel(56,py,BLUE);
        putpixel(57,py,BLUE);
        putpixel(58,py,BLUE);
        putpixel(59,py,BLUE);
        putpixel(60,py,BLUE);

        putpixel(61,py,BLUE);
        putpixel(62,py,BLUE);
        putpixel(63,py,BLUE);
        putpixel(64,py,BLUE);






    }










    draw_rounded_rectangle(100, 90, 30, 30, 5);


    draw_rounded_rectangle(80, 420, 30, 30, 5);
        line(80,429,110,429);
        for(Px = 81; Px < 110; Px ++){
			putpixel(Px,428,YELLOW);
            putpixel(Px,427,YELLOW);
            putpixel(Px,426,YELLOW);
            putpixel(Px,425,YELLOW);
            putpixel(Px,424,YELLOW);
            putpixel(Px,423,YELLOW);
            putpixel(Px,422,YELLOW);
            putpixel(Px,421,YELLOW);
        }

        line(80,435,110,435);
        line(80,443,110,443);


    draw_rounded_rectangle(140, 420, 30, 30, 5);

    settextstyle(SMALL_FONT, HORIZ_DIR, 2);
    outtextxy(149,425,"MAR");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(152,435,"2");



    draw_rounded_rectangle(200, 420, 30, 30, 5);

    circle(205,427,2);
    setfillstyle(SOLID_FILL, BLUE);
	floodfill(205,427, WHITE);

    circle(205,434,2);
    setfillstyle(SOLID_FILL, RED);
	floodfill(205,434, WHITE);

    circle(205,442,2);
    setfillstyle(SOLID_FILL, YELLOW);
	floodfill(205,442, WHITE);

    line(210,427,224,427);
    line(210,434,224,434);
    line(210,442,224,442);






    /*dibujar el bar que se tiene abajo*/
    draw_rounded_rectangle(10, 402, 290, 60, 15);
    /*dibujar el control de movimient0*/

    draw_rounded_rectangle(110, 473, 90, 15, 5);
    /*bateria simbolo*/
    draw_rounded_rectangle(248, 5, 10, 3, 1);

    arc(241,5, 0, 170, 4);
    arc(241,7, 1, 100, 4);

    arc(241,9, 2, 90, 4);




    /* ---------------------------------------------------------------------------------------------------------------------------------------------------------*/



    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(50, 5, "12:31");
    settextstyle(SMALL_FONT, HORIZ_DIR, 4);
    outtextxy(40, 75,"Brainly");
    outtextxy(98, 75,"Contactos");
    outtextxy(160, 75, "Chrome");
    outtextxy(220, 75, "twitch");
    outtextxy(40, 125,  "Word");
    outtextxy(105, 125,  "Enki");


	circle(112,55,10);

    line(125,40,125,70);

    line(125,50,130,50);
    line(125,60,130,60);


    circle(112,50,2);

    arc(112,61, 0, 180, 7);

    rectangle(228,45,243,61);
    setfillstyle(SOLID_FILL, WHITE);
	floodfill(229,55 ,WHITE);

    for(py = 44; py < 67; py ++){
		putpixel(224,py, MAGENTA);
        putpixel(223,py, MAGENTA);
        putpixel(222,py, MAGENTA);
        for(Px = 224; Px < 250; Px ++){
			putpixel(Px,65,MAGENTA);
            putpixel(Px,66,MAGENTA);
            putpixel(Px,67,MAGENTA);
            putpixel(Px,68,MAGENTA);
        }

    }

    for(py = 44; py < 67; py ++){
		putpixel(244,py, MAGENTA);
        putpixel(245,py, MAGENTA);
        putpixel(246,py, MAGENTA);
        putpixel(247,py, MAGENTA);
        putpixel(248,py, MAGENTA);
        for(Px = 223; Px < 249; Px ++){
			putpixel(Px,44,MAGENTA);
            putpixel(Px,43,MAGENTA);
            putpixel(Px,42,MAGENTA);
            putpixel(Px,41,MAGENTA);
        }


    }


    for(py = 49; py < 55; py ++){
		putpixel(232,py, BLACK);
        putpixel(233,py, BLACK);
        putpixel(234,py, BLACK);

        putpixel(238,py, BLACK);
        putpixel(239,py, BLACK);
        putpixel(240,py, BLACK);

    }







    drawpoly(4, brad1);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(44, 45, WHITE);

    drawpoly(4, brad2);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(59, 67, WHITE);

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(48, 48,"B");

	settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(104, 102,"<e>");

    circle(175,55,12);

    circle(175,55,5);
    setfillstyle(SOLID_FILL, BLUE);
	floodfill(175,55, WHITE);


    for (Px = 172; Px < 179; Px++){
            putpixel(Px, 44, RED);
    }
    for (Px = 170; Px < 181; Px++){
            putpixel(Px, 45, RED);
    }
    for (Px = 168; Px < 183; Px++){
            putpixel(Px, 46, RED);
    }
    for (Px = 167; Px < 184; Px++){
            putpixel(Px, 47, RED);
    }
    for (Px = 166; Px < 185; Px++){
            putpixel(Px, 48, RED);
    }
    for (Px = 166; Px < 185; Px++){
            putpixel(Px, 48, RED);
    }
    for (Px = 166; Px < 185; Px++){
            putpixel(Px, 48, RED);
    }
    for (Px = 166; Px < 185; Px++){
            putpixel(Px, 49, RED);
    }
    for (Px = 165; Px < 173; Px++){
            putpixel(Px, 50, RED);
    }
    for (Px = 165; Px < 172; Px++){
            putpixel(Px, 51, RED);
    }
    for (Px = 166; Px < 171; Px++){
            putpixel(Px, 52, RED);
    }
    for (Px = 167; Px < 170; Px++){
            putpixel(Px, 53, RED);
    }
    for (Px = 168; Px < 169; Px++){
            putpixel(Px, 54, RED);
    }
    for (Px = 164; Px < 167; Px++){
            putpixel(Px, 52, GREEN);
    }
    for (Px = 164; Px < 168; Px++){
            putpixel(Px, 53, GREEN);
    }
    for (Px = 164; Px < 170; Px++){
            putpixel(Px, 54, GREEN);
    }
    for (Px = 164; Px < 170; Px++){
            putpixel(Px, 55, GREEN);
    }
    for (Px = 164; Px < 170; Px++){
            putpixel(Px, 56, GREEN);
    }
    for (Px = 164; Px < 170; Px++){
            putpixel(Px, 57, GREEN);
    }
    for (Px = 164; Px < 171; Px++){
            putpixel(Px, 58, GREEN);
    }
    for (Px = 165; Px < 172; Px++){
            putpixel(Px, 59, GREEN);
    }
    for (Px = 165; Px < 173; Px++){
            putpixel(Px, 60, GREEN);
    }
    for (Px = 166; Px < 174; Px++){
            putpixel(Px, 61, GREEN);
    }
    for (Px = 166; Px < 175; Px++){
            putpixel(Px, 62, GREEN);
    }
    for (Px = 167; Px < 176; Px++){
            putpixel(Px, 63, GREEN);
    }
    for (Px = 168; Px < 177; Px++){
            putpixel(Px, 64, GREEN);
    }
    for (Px = 169; Px < 178; Px++){
            putpixel(Px, 64, GREEN);
    }
    for (Px = 170; Px < 178; Px++){
            putpixel(Px, 65, GREEN);
    }
    for (Px = 171; Px < 178; Px++){
            putpixel(Px, 66, GREEN);
    }
    for (Px = 173; Px < 185; Px++){
            putpixel(Px, 61, YELLOW);
    }
    for (Px = 174; Px < 185; Px++){
            putpixel(Px, 62, YELLOW);
    }
    for (Px = 175; Px < 184; Px++){
            putpixel(Px, 63, YELLOW);
    }
    for (Px = 177; Px < 183; Px++){
            putpixel(Px, 64, YELLOW);
    }
    for (Px = 178; Px < 181; Px++){
            putpixel(Px, 65, YELLOW);
    }
    for (Px = 178; Px < 180; Px++){
            putpixel(Px, 66, YELLOW);
    }
    for (Px = 178; Px < 186; Px++){
            putpixel(Px, 60, YELLOW);
    }
    for (Px = 179; Px < 186; Px++){
            putpixel(Px, 59, YELLOW);
    }
    for (Px = 180; Px < 187; Px++){
            putpixel(Px, 58, YELLOW);
    }
    for (Px = 180; Px < 187; Px++){
            putpixel(Px, 57, YELLOW);
    }
    for (Px = 180; Px < 187; Px++){
            putpixel(Px, 56, YELLOW);
    }
    for (Px = 180; Px < 187; Px++){
            putpixel(Px, 55, YELLOW);
    }
    for (Px = 180; Px < 187; Px++){
            putpixel(Px, 54, YELLOW);
    }
    for (Px = 181; Px < 187; Px++){
            putpixel(Px, 53, YELLOW);
    }
    for (Px = 180; Px < 187; Px++){
            putpixel(Px, 52, YELLOW);
    }
    for (Px = 179; Px < 186; Px++){
            putpixel(Px, 51, YELLOW);
    }
    for (Px = 178; Px < 186; Px++){
            putpixel(Px, 50, YELLOW);
    }


            line(0, 300, 300, 300);

     for (Px = 189; Px < 191; Px++){
        putpixel(Px, 299, WHITE);
    }
     for (Px = 189; Px < 190; Px++){
            putpixel(Px, 298, WHITE);
    }
    for (Px = 189; Px < 191; Px++){
            putpixel(Px, 297, WHITE);
    }
    for (Px = 189; Px < 192; Px++){
            putpixel(Px, 296, WHITE);
    }
    for (Px = 189; Px < 193; Px++){
            putpixel(Px, 295, WHITE);
    }
    for (Px = 188; Px < 196; Px++){
            putpixel(Px, 294, WHITE);
    }
    for (Px = 196; Px < 199; Px++){
            putpixel(Px, 295, WHITE);
    }
    for (Px = 187; Px < 197; Px++){
            putpixel(Px, 293, WHITE);
    }
    for (Px = 186; Px < 198; Px++){
            putpixel(Px, 292, WHITE);
    }
    for (Px = 185; Px < 199; Px++){
            putpixel(Px, 291, WHITE);
    }
    for (Px = 184; Px < 199; Px++){
            putpixel(Px, 290, WHITE);
    }
    for (Px = 184; Px < 200; Px++){
            putpixel(Px, 289, WHITE);



    }
    for (Px = 184; Px < 188; Px++){
            putpixel(Px, 288, WHITE);
    }
    for (Px = 184; Px < 187; Px++){
            putpixel(Px, 287, WHITE);
    }
    for (Px = 184; Px < 186; Px++){
            putpixel(Px, 286, WHITE);
    }
    for (Px = 184; Px < 185; Px++){
            putpixel(Px, 285, WHITE);
    }



    for (Px = 192; Px < 202; Px++){
            putpixel(Px, 288, WHITE);
    }
    for (Px = 193; Px < 198; Px++){
        putpixel(Px, 287, WHITE);
    }
    for (Px = 194; Px < 204; Px++){
        putpixel(Px, 286, WHITE);
        putpixel(Px, 285, WHITE);
        putpixel(Px, 284, WHITE);
        putpixel(Px, 283, WHITE);
        putpixel(Px, 282, WHITE);

    }
    for (Px = 195; Px < 203; Px++){
    putpixel(Px, 281, WHITE);

    }

    for(py = 279; py < 299; py ++){
		putpixel(224,py, WHITE);
        putpixel(223,py, WHITE);
        putpixel(222,py, WHITE);
    }
    for(py = 282; py < 291; py ++){
		putpixel(227,py, WHITE);
        putpixel(228,py, WHITE);
        putpixel(229,py, WHITE);
    }

    for(py = 282; py < 291; py ++){
		putpixel(217,py, WHITE);
        putpixel(218,py, WHITE);
        putpixel(219,py, WHITE);
        for(px = 219 ; px < 229; px++){;
        putpixel(px,291 ,WHITE);
        putpixel(px,  290,WHITE);
        putpixel(px,  289,WHITE);
        }



    }










    getch();
    closegraph();
	return 0;
}
