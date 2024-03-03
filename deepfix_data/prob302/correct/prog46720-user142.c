#include <stdio.h>
int main() {
    float a,c,p,x1,x2,x,y1,y2,y;
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x,&y);
    if((x>x1 && x<x2) && (y>y1 && y<y2))
    printf("Point is inside the rectangle.");
    else if((x>x1 && x<x2) && (y>y1 && y<y2))
        printf("Point is outside the rectangle.");
        else
        printf("Point is on the line.");
	return 0; }