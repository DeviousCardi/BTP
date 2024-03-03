#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	double a,b,area;
	 double x;
	scanf("%d%lf%lf",&n,&a,&b);
	area=0.0;
	if (a==b)
	    printf("0");
else
if(a!=b) {
	for(i=1;i<=((b-a)*i)/n;i++){
	    x=a+((b-a)*(i))/n;
	    area=area +2.0*x*x*x +8.0*x; }
	for(i=((b-a)*i)/n;i<=n;i++) {
	    x=a+((b-a)*(i))/n;
	    area=area +8.0*x -2.0*x*x*x; }
	printf("%lf",area); }
	return 0; }