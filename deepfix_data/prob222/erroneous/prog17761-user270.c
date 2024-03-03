#include <stdio.h>
int main() {
	float a,b,c,d,e,f,x,y,z,med;
	scanf("%f%f%f/n",%a,%b,%c);
	scanf("%f%f%f",%d,%e,%f);
	x=a*40/50 + d*60/100;
	y=b*40/50 + e*60/100;
	z=c*40/50 + f*60/100;
	if 	(((x<=y)&&(x>=z))||((x>=z)&&(x>=y)))
	{ med=x; }
	else if (((y<=z)&&(y>=x))||((y>=x)&&(y>=z)))
	{ med=y; }
	else {med=z;}
	return 0; }