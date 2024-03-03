#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	int i,cx,x[1000],x[0]=a,area=0,part[1000],(b-a),n;
	double a,b;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	cx=(b-a)/n;
	for(i=1;i<=n;i++){
      	x[i]=x[i-1]+cx; }
	for(i=0;i<n;i++){
	    part[i]=2*pow(x[i],3)-8*x[i]; }
	for(i=0;i<n;i++){
	    area=area+part[i]; }
	printf("%lf",area);
	return 0; }