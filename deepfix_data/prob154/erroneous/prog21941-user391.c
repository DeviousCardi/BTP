#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,del,x,area;
	int n,k;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	del=(b-a)/n;
	printf("%lf",x);
   for(k=0;k<=n,k++) {
     x=a+del*n;
     if(x<=-1)
     area=area+1;
     if(x>-1&&x<1)
     area=area+x*x;
     if(x>=1)
     area=area+x*x*x; }
   printf("%lf",area);
	return 0;