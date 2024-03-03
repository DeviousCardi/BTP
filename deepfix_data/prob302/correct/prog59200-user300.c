#include <stdio.h>
int main()
{   float ax,ay,cx,cy,px,py;
float x1,x2,y1,y2;
    scanf("%f%f\n%f%f\n%f%f",&ax,&ay,&cx,&cy,&px,&py);
	if(ax>cx) {x1=cx; x2=ax; }
	else{ x1= ax; x2=cx;}
	if(ay>cy) {y1=cy; y2=ay; }
	else{ y1= ay; y2=cy;}
	if((px>x1&&px<x2)&&(py>y1&&py<y2))
	printf("Point is inside the rectangle.");
	else if((px>x1&&px>x2)&&(py>y1&&py>y2))
	printf("Point is outside the rectangle.");
	else
	printf("Point is on the rectangle.");
	return 0; }