#include <stdio.h>
#include <stdlib.h>
int main() {
        	double a,b,y,z,s=0;
        	int i,n;
	scanf("%lf",a);
	scanf("%lf",b);
	scanf("%d",n);
	for(i=0;i<n;i++) {
	z=a+(b-a)*i/n;
	if(z<=-1)
	y=1;
	else if((z>=-1)&&(z<=1))
	y=z*z;
	else if(z>=1);
	y=z*z*z;
	s=s+(b-a)*y/n; }
	printf("%.4lf",s);
	return 0; }