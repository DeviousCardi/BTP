#include <stdio.h>
int main() {
	float x1,x2,x3 ;
	float y1,y2,y3;
	scanf("%f%f%f",&x1,&x2,&x3);
	scanf("%f%f%f",&y1,&y2,&y3);
	printf("%d",x1);
	if((x2>x1 && y1<y2) || (x1>x2 && y1>y2))
	{printf("Point lies inside the rectangle");}
	return 0; }