#include <stdio.h>
int main()
{float ax,ay,cx,cy,px,py,minx,miny,maxx,maxy;
scanf("%f",&ax);
scanf("%f",&ay);
scanf("%f",&cx);
scanf("%f",&cy);
scanf("%f",&px);
scanf("%f",&py);
if (ax<cx)
{minx=ax;
maxx=cx;}
else
{minx=cx;
maxx=ax;}
if (ay<cy)
{miny=ay;
maxy=cy;}
else
{miny=cy;
maxy=ay;}
if (px>minx&&px<maxx&&py>miny&&py<maxy)
printf("Point is inside the rectangle.");
else if((px==minx||px==maxx)&&(py==miny||py==maxy))
printf("Point is on the rectangle.");
else
printf("Point is outside the rectangle.");
	return 0; }