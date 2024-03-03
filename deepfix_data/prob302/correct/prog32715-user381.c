#include <stdio.h>
int main() {
	int x1,x2,x3 ;
	int y1,y2,y3;
	scanf("%d%d%d",&x1,&x2,&x3);
	scanf("%d%d%d",&y1,&y2,&y3);
	printf("%d",x1);
	if((x2>x1 && y1<y2) || (x1>x2 && y1>y2))
	{printf("Point lies inside the rectangle");}
	return 0; }