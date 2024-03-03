#include <stdio.h>
int main() {
	float a,b,c,d,e,f,g,h,i,x,y,z,u,v,w,m;
	scanf("%f%f%f",&a,&b,&c);
	scanf("%f%f%f",&x,&y,&z);
	u=(4.0*a)/5;
	v=(4.0*b)/5;
	w=(4.0*c)/5;
	d=(3.0*x)/5;
	e=(3.0*y)/5;
	f=(3.0*z)/5;
	g=u+a;
	h=v+b;
	i=w+c;
	m=(g+h+i)/3.0;
	printf("Median weighted score = %.2f",m);
	return 0; }