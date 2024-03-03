#include <stdio.h>
int main() {
    float x1, x2, y1, y2, x, y;
	scanf("%f%f",&x1,&y1);
	scanf("%f%f",&x2,&y2);
	scanf("%f%f",&x,&y);
	float X1, X2, Y1, Y2;
	if (x1<x2)
    	{ X1=x1;
    	  X2=x2; }
	else
	    { X1=x2;
	      X2=x1; }
	if (y1<y2)
	    { Y1=y1;
	      Y2=y2; }
	else
	    { Y1=y2;
	      Y2=y1; }
	if (x==X1||x==X2) {
	        if (y==Y1||y==Y2)
	        printf("Point is on the rectangle.");
	        else if (y<Y1||y>Y2)
	        printf("Point is outside the rectangle.");
	        else if (y>Y1&&y<Y2)
	        printf("Point is on the rectangle."); }
    else if (x<X1||x>X2)
            printf("Point is outside the rectangle.");
    else if (x>X1&&x<X2) {
            if (y<Y1||y>Y2)
	        printf("Point is outside the rectangle.");
	        else if (y>Y1&&y<Y2)
	        printf("Point is inside the rectangle."); }
	return 0; }