#include <stdio.h>
int main() {
    float a,c,p,x1,x2,x,y1,y2,y;
    scanf("%.1f%.1f%.1f%.1f%.1f%.1f",&x1,&y1,&x2,&y2,&x,&y);
    if(x>x1 && x<x2 && y>y1 && y<y2)
    printf("point is inside the rectangle");
    else{
        printf("point is outside the rectangle");}
        if(x>=x1 && x<=x2 && y>=y1 && y<=y2)
        printf("point is on the line");
	return 0; }