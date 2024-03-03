#include <stdio.h>
int main()
{float a,b,c,d,x,y;
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&x,&y);
if ((a<x&&x<c) && (b<y&&y<d)){printf("Point is inside the rectangle");}
else if ((x==a||x==c) && (y==b||y==d)){printf("Point is on the rectangle")}
else {printf("Point is outside the rectangle");}
	return 0; }