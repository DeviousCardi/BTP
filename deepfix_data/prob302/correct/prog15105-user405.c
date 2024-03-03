#include <stdio.h>
int main() {
	float x1, x2, px, y1, y2, py, xmax, xmin, ymax, ymin;
	scanf("%f %f\n", &x1, &y1);
	scanf("%f %f\n", &x2, &y2);
	scanf("%f %f", &px, &py);
	if(x2>x1)
	{ xmax=x2;
	  xmin=x1;}
	else
	{ xmax=x1;
	  xmin=x2;}
	if(y2>y1){ymax=y2; ymin=y1;}
	else{ymax=y1; ymin=y2;}
	if((px>xmin && px<xmax) && (py>ymin && py<ymax))
	printf("Point is inside the rectangle.");
	else if((px>xmax || px<xmin) || (py>ymax || py<ymin))
	printf("Point is outside the rectangle.");
	else
	printf("Point is on the rectangle.");
	return 0; }