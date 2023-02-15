#include<graphics.h>
#include<conio.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 setbkcolor(BLUE);
 printf("\t\t\t\n\nLINE");
 LINE(50,40,190,40);
 printf("\t\t\n\n\n\nRECTANGLE");
 rectangle(125,115,215,165);
 printf("\t\t\t\n\n\n\n\n\n\na\ARC");
 arc(120,200,180,0,30);
 printf("\t\n\n\n\nCIRCLE");
 circle(120,270,30);
 printf("\t\n\n\n\nECLIPSE");
 ellipse(120,350,0,360,30,20);
 getch();
}


