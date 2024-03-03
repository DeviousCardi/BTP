#include <stdio.h>
int main() {
	int x1,y1,x2,y2;
	float n;
	scanf("%d %d %d %d,&x1,&y1,&x2,&y2);
	if(-100<=x1<=100 && -100<=x2<=100 && -100<=y1<=100 && -100<=y2<=100); {
	    n=(y2-y1)/(x2-x1);
	    printf("%f",&n); }
	else if(x1=x2)
	{printf("slope is infinity.");
    return 0; }