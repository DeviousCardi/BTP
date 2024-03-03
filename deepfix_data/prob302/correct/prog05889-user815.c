#include <stdio.h>
int main() {
	float x1,y1,x2,y2,x3,y3,a1,a2,c1,c2;
	scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
	if(((y2-y1)*(y3-y1)>0)&&((y1-y2)*(y3-y2)>0)) {
	        if(x3==x1||x3==x2)
	        printf("Point is on the rectangle.");
	        else if(((x2-x1)*(x3-x1)>0)&&((x1-x2)*(x3-x2)>0))
	             printf("Point is inside the rectangle.");
	        else printf("Point is outside the rectangle."); }
	else if (y3==y1||y3==y2) {
	        if(((x2-x1)*(x3-x1)>=0)&&((x1-x2)*(x3-x2)>=0))
	        printf("Point is on the rectangle.");
	        else printf("Point is outside the rectangle."); }
	else printf("Point is outside the rectangle."); }