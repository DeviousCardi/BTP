#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (c*c<=a*a+b*b) { if (c*c==a*a+b*b)  {printf("Right tringle");}
	else { printf("not right tringle"); } }
	else
	{printf("cannot form a tringle"); }
	return 0; }