#include <stdio.h>
int main()
{   float ax,ay,cx,cy,px,py,xmin,xmax,ymin,ymax;
    scanf("%f%f",ax,ay);
	scanf("%f%f",cx,cy);
	scanf("%f%f",px,py);
	(ax<cx)?(xmin=ax,xmax=cx;):(xmin=cx,xmax=ax);
	return 0; }