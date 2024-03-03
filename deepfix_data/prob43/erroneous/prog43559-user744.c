#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n;
float f (n), g (n);
if((n>=-2)&&(n<=2)) {
      f=-(n*n)+3*n;
        g=(2*n*n*n*)-(n*n)-(5*n); }
int main() {
	int n,i,area;
	double a,b;
	area=0;
	scanf("%lf,%lf,%d",&a,&b,&n);
	for(i=a;i<b;i=i+(b-a)/n) {
	    area=area+(f(i)-g(i))*((b-a)/n); }
	printf("%.4f",area);
	return 0; }