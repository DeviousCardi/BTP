#include <stdio.h>
int main() {
	int x1,x2,x3 ;
	int y1,y2,y3;
	scanf("%d%d%d",&x1,&x2,&x3);
	scanf("%d%d%d",&y1,&y2,&y3);
	printf("%d\n",x1);
	printf(" %d",y1);
	printf("%d\n",x2);
	printf(" %df",y2);
	printf("%d\n",x3);
	printf(" %d",x3);
	if((x2>x3>x1 && y1<y3<y2) || (x1>x3>x2 && y1>y3>y2))
	{printf("Point lies inside the rectangle");}
	return 0; }