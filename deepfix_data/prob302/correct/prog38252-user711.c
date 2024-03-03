#include <stdio.h>
int main() {
	float x1,y1,x2,y2,x3,y3;
	scanf("%f %f\n",&x1,&y1);
	scanf("%f %f\n",&x2,&y2);
	scanf("%f %f\n",&x3,&y3);
	if((x3<x2)&&(x3>x1)&&(y3>y1)&&(y3<y2))
	    printf("Point is inside the rectangle");
	if((x3>x2)||(x3<x1)||(y3<y1)||(y3>y2))
	    printf("Point is outside the rectangle");
	if((x3<=x2)&&(x3>=x1)&&((y3==y2)||(y3==y1)))
	    printf("Point is on the rectangle");
	if((y3>=y1)&&(y3<=y2)&&((x3==x1)||(x3==x2)))
	    printf("Point is on the rectangle");
	return 0; }