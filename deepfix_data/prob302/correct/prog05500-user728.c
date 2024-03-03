#include <stdio.h>
int main(){
float x1,x2,x3,xm,y1,y2,y3,ym,xc,yc;
 scanf("%f %f",&x1,&y1);
 scanf("%f %f",&x2,&y2);
 scanf("%f %f",&x3,&y3);
 if(x3>x2&&x3<x1||y3>y2||y1>y3)
  printf("Point is outside the rectangle.");
 if(x3==x1||(x3==x2)&&y2>y3&&y3>y1)
	printf("Point is on the rectangle.");
 else
 printf("Point is inside the rectangle.");
	return 0; }