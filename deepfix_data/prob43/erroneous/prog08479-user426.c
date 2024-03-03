#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,c,area=0,xi;
	int n,i=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    xi=(a+((i*(b-a))/n));
	    if((xi>2)||((xi<0)&&(xi>(-1*2))){
	    c=2*xi*(xi-2)*(xi+2); }
        else{
        c=2*xi*(xi-2)*(xi+2)*-1; }
	    area=area+(c*(b-a)/n); }
	printf("%.4lf",area);
	return 0; }