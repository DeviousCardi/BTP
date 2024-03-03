#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double epsilon=0.000001;
int main() {
	double a,b;
	double f,g;
	long int n,i;
	scanf("%lf %lf %ld",&a,&b,&n);
	double t,sum=0;
	double j=float j*epsilon;
	for(i=1;i<n;i=i++) {
	      j=a+(i*((b-a)/n));
	      f=-(j*j)+(3*j);
	      g=(2*j*j*j)-(j*j)-(5*j);
	      t=fabs(f-g)*((b-a)/n);
	      sum=sum+t; }
	 printf("%.4lf",sum);
	 return 0; }