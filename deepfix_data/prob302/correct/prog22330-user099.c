#include <stdio.h>
#include <stdlib.h>
int main() {
    float x1,x2,x3,y1,y2,y3,x,y;
    scanf("%f%f\n%f%f\n%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    x=abs(x3-(x1+x2)/2);
    y=abs(y3-(y1+y2)/2);
    if (x<abs(x1-x2)/2&&y<abs(y1-y2)/2)
        printf("Point is inside the rectangle.");
    else if(x>abs(x1-x2)/2||y>abs(y1-y2)/2)
        printf("Point is outside the rectangle.");
    else printf("Point is on the rectangle.");
	return 0; }