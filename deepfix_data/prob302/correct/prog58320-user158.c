#include <stdio.h>
int main()
{float ax,ay,cx,cy,px,py,xsmall,xbig,ysmall,ybig;
scanf("%f%f%f%f%ff%f",&ax,&ay,&cx,&cy,&px,&py);
if(ax<cx)
{ax=xsmall,cx=xbig;}
else {cx=xsmall,ax=xbig;}
if(ay<cy)
{ay=ysmall,cy=ybig;}
else{cy=ysmall,ay=ybig;}
if(px>xsmall&&px<xbig&&py>ysmall&&py<ybig)
{printf("Point is inside the rectangle.");}
else if (px==xsmall||px==xbig&&(py>=ysmall&&py<=ybig))
{printf("Point is on the rectangle.");}
else if (py==ysmall||py==ybig&&(px>=xsmall&&px<=xbig))
{printf("Point is on the rectangle.");}
else {printf("Point is outside the rectangle.");}
	return 0; }