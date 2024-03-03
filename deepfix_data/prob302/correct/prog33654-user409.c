#include <stdio.h>
int main()
{float x1,x2,y1,y2,x,y;
scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x,&y);
if((x>x1)&&((x<x2)||(x>x2))&&(y>y1)&&(y>y2)){
    printf("Point is inside the rectangle."); }
else{if((x==x1&&y==y1)||(x=x2&&y==y2)||(x==x2&&y==y1)||(x=x1&&y==y2)){
    printf("Point is on the rectangle.");}
    else{
        printf("Point is outside the rectangle.");
    }}
	return 0; }