#include <stdio.h>
int main(){
float x1,x2,x3,xm,y1,y2,y3,ym,xc,yc;
 scanf("%f %f",&x1,&y1);
 scanf("%f %f",&x2,&y2);
 scanf("%f %f",&x3,&y3);
 xm=(x1+x2)/2;
 ym=(y1+y2)/2;
 xc=(x2-x1)/2;
 yc=(y2-y1)/2;
 if(((x3-xm)*(x3-xm))>(xc*xc))||(((y3-ym)*(y3-ym))>(yc*yc))
  printf("Point is outside the rectangle.");
 if(((x3-xm)*(x3-xm))<(xc*xc))||(((y3-ym)*((y3-ym))<(yc*yc))
	printf("Point is inside the rectangle.");
if(((x3-xm)*(x3-xm))==(xc*xc))||(((y3-ym)*(y3-ym))==(yc*yc))
	printf("Point is on the rectangle.");
	return 0; }