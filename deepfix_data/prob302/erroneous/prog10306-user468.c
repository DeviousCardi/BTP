#include <stdio.h>
int main() {
    float x1, x2, y1, y2, x, y;
	scanf("%f%f",&x1,&y1);
	scanf("%f%f",&x2,&y2);
	scanf("%f%f",&x,&y);
	if (x1>x2)
    	{ float X1=x1;
    	  float X2=x2; }
	else
	    {float X1=x2;
	     float X2=x1; }
	if (y1>y2)
	    { float Y1=y1;
	      float Y2=y2; }
	else
	    { float Y1=y2;
	      float Y2=y1; }
	if (x==X1||x==X2) {
	        if (y==Y1||y==Y2)
	        printf("Point is on the rectangle");
	        else if (y<Y1||y>Y2)
	        printf("Point is outside the rectangle");
	        else if (y>Y1&&y<Y2)
	        printf("Point is on the rectangle"); }
    else if (x<X1||x>X2)
            printf("Point is outside the rectangle");
    else if (x>X1&&x<X2) {
            if (y<Y1||y>Y2)
	        printf("Point is outside the rectangle");
	        else if (y>Y1&&y<Y2)
	        printf("Point is inside the rectangle"); }
	return 0; }