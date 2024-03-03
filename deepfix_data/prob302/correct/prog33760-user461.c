#include <stdio.h>
#include<math.h>
int main() {
	float x1,y1,x2,y2,x3,y3;
	scanf("%f %f",&x1,&y1);
	scanf("%f %f",&x2,&y2);
	scanf("%f %f",&x3,&y3);
	float area=abs(0.5*(x2-x1)*(y2-y1));
	float flag=abs(0.5*((x2*y3-y2*x3)-(x1*y3-y1*x3)+(x1*y2-y1*x2)));
	if (area==flag)
	printf("Point is on the rectangle.");
	else if(area>flag)
	printf("Point is inside the rectangle.");
	else
	printf("Point is outside the rectangle.");
	return 0; }