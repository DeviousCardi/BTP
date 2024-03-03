#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	float a,b,area;
	float i,diff,x;
	scanf("%d%f%f",&n,&a,&b);
	diff=(b-a)/n;
	i=0;
	x=a+diff*(i);
	area=0.0;
	for(i=1;i<=(n*a)/(b-a);i++){
	    area=area +2.0*x*x*x +8.0*x; }
	for(i=(n*a)/(b-a);i<=n;i++){
	    area=area +8.0*x -2.0*x*x*x; }
	printf("%f",area);
	return 0; }