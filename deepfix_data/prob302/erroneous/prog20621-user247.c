#include <stdio.h>
int main()
{   float x1,x2,x3,y1,y2,y3,temp1,temp2;
    scanf("%f %f",&x1,&y1);
	scanf("%f %f",&x2,&y2);
	scanf("%f %f",&x3,&y3);
	if((y1<y3 && y3<y2)&&(x1<x3 && x3<x2))
	printf("Point is inside the rectangle.");
	else if((y3<y1||y3>y2)&&(x3<x1||x3>x2))
	printf("Point is outside the rectangle.");
	else if((y1<y3 && y3=<y2)&&(x3=<x1||x3>x2))
    printf("Point is outside the rectangle.");
    else if((y3<y1||y3>y2)&&(x1=<x3 && x3<x2))
    printf("Point is outside the rectangle.");
	else
	printf("Point is on the rectangle.");
	return 0; }