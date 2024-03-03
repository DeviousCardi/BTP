#include <stdio.h>
int main() {
	float a,b,c,d,e,f,x,y,z,med;
	scanf("%f%f%f\n",&a,&b,&c);
	scanf("%f%f%f",&d,&e,&f);
	x=a*40.0/50 + d*60.0/100;
	y=b*40.0/50 + e*60.0/100;
	z=c*40.0/50 + f*60.0/100;
	if 	(((x<=y)&&(x>=z))||((x>=y)&&(x<=z)))
	{ med=x; }
	else if (((y<=z)&&(y>=x))||((y>=z)&&(y<=x)))
	{ med=y; }
	else {med=z;}
	printf("Median weighted score = %.2f",med);
	return 0; }