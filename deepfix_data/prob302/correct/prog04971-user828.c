#include <stdio.h>
int main() {
	float x1,y1,x2,y2,x,y;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	scanf("%f %f", &x, &y);
	if((x>x1)&&(x<x2))   {
	    if((y>y1)&&(y<y2))  {
	       printf("Point is inside the rectangle"); } }
	else if((x==x1)||(x==x2))  {
	    if((y==y1)||(y==y2)) {
	      printf("Point is on the rectangle"); } }
	else
	printf("Point is outside the rectangle");
	return 0; }