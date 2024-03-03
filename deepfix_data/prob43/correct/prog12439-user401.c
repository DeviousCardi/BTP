#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	float a,b,area;
	float i,x;
	scanf("%d%f%f",&n,&a,&b);
	area=0.0;
	for(i=1;i<=(n*a)/(b-a);i++){
	    x=a+((b-a)*(i))/n;
	    area=area +2.0*x*x*x +8.0*x; }
	for(i=(n*a)/(b-a);i<=n;i++){
	    x=a+((b-a)*(i))/n;
	    area=area +8.0*x -2.0*x*x*x; }
	printf("%f",area);
	return 0; }