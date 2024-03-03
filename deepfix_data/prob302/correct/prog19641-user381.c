#include <stdio.h>
int main() {
	float x1,x2,x3 ;
	float y1,y2,y3;
	scanf("%f%f%f",&x1,&y1,&x2);
	scanf("%f%f%f",&y2,&x3,&y3);
	printf("%.1f",x1);
	printf(" %.1f\n",y1);
	printf(" %.1f\n",x2);
	printf(" %.1f\n",y2);
	printf(" %.1f\n",x3);
	printf(" %.1f\n",y3);
	if((x2>=x3>=x1 && y1<=y3<=y2) || (x1>=x3>=x2 && y1>=y3>=y2))
	{printf("Point lies inside the rectangle.\n");}
	    else {printf("Point lies on the rectangle."); }
	return 0; }