#include <stdio.h>
int main() {
	float a1,a2,b1,b2,p1,p2;
	scanf("%f %f",&a1,&a2);
	scanf("%f %f",&b1,&b2);
	scanf("%f %f",&p1,&p2);
	if(p1<a1||p1>b1)
	printf("Point is outside the rectangle");
	else if(p1>a1||p1<a2)
	printf("Point is inside the rectangle")
	else
	printf("Point is on the rectangle");
	return 0; }