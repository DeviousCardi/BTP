#include <stdio.h>
int main() {
	float x1,x2,x3;
	float y1,y2,y3;
	float tmp;
	scanf("%f%f",&x1,&y1);
	scanf("%f%f",&x2,&y2);
	scanf("%f%f",&x3,&y3);
	if(x1>x2) {
	    tmp=x2;
	    x2=x1;
	    x1=tmp; }
	if(y1>y2) {
	    tmp=y2;
	    y2=y1;
	    y1=tmp; }
	if( (x3<x2) && (x3>x1) && (y3<y2) && (y3>y1) )
	printf("Point is inside the rectangle");
	else
	if( (x3<=x2) && (x3>=x1) && ( (y3==y2) || (y3==y1) ) )
	printf("Point is on the rectangle");
	else
	if( ( (x3==x2) || (x3==x1) ) && (y3<=y2) && (y3>=y1) )
	printf("Point is on the rectangle");
	else
	printf("Point is outside the rectangle");
	return 0; }