#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	double a,b,x,y;
	int n,i;
	scanf("%lf %lf %d",&a,&b,&n);
	double j,t,sum=0;
	for(i=1;i<n;i=i++) {
	      j=a+((i*(b-a))/n);
	      x=-(j*j)+(3*j);
	      y=(2*j*j*j)-(j*j)-(5*j);
	      t=(fabs(x-y)*(b-a)/n);
	      sum=sum+t; }
	 printf("%.4lf",sum);
	return 0; }