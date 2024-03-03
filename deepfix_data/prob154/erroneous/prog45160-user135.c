#include <stdio.h>
#include <stdlib.h>
int main() {
	doule a,b;
	int n,i,j,sum1=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    for(j=i;j<=b-a;j++) {
	        if((a+(b-a)/n)<-1) {
	            sum1=sum1+(b-a)/n } } }
	return 0; }