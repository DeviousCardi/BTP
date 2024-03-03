#include <stdio.h>
int main() {
	float x1, x2, px, y1, y2, py;
	scanf("%f %f\n", &x1, &y1);
	scanf("%f %f\n", &x2, &y2);
	scanf("%f %f", &px, &py);
	if((px>x1 && px<x2) && (py>y1 && py<y2))
	printf("Point is inside the rectangle.");
	else if((px>x2 || px<x1) || (py>y2 || py<y1))
	printf("Point is outside the rectangle.");
	else
	printf("Point is on the rectangle.");
	return 0; }