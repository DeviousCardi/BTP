#include <stdio.h>
int main() {
    float x1,x2,x,y1,y2,y;
    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2,&y2);
    scanf("%f %f",&x,&y);
    if(((x<=x1 && x>=x2) ||(x<=x2 && x>=x1)) && (y==y1 ||y==y2))
        printf("Point is on the rectangle.");
    else if(((y<=y1 && y>=y2) ||(y<=y2 && y>=y1)) && (x==x1 ||x==x2))
        printf("Point is on the rectangle.");
    else if(((x<x1&&x>x2)||(x<x2 && x>x1)) && ((y<y1&&y>y2)||(y<y2 && y>y1)))
        printf("Point is inside the rectangle.");
    else
        printf("Point is outside the rectangle.");
	return 0; }