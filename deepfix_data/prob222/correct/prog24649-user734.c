#include <stdio.h>
int main() {
	float a,b,c,x,y,z,u,v,w,m;
	scanf("%f%f%f",&a,&b,&c);
	scanf("%f%f%f",&x,&y,&z);
	u=(2.0*a)/5;
	v=(2.0*b)/5;
	w=(2.0*c)/5;
	a=(3.0*x)/5;
	b=(3.0*y)/5;
	c=(3.0*z)/5;
	x=u+a;
	y=v+b;
	z=w+c;
	m=(x+y+z)/3.0;
	printf("%.2f",m);
	return 0; }