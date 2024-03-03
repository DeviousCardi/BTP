#include <stdio.h>
#include <stdlib.h>
int main() {
	double area,a,b;
	int i,n;
	scanf("%lf %lf",&a,&b);
	scanf("%d",&n);
	 for (i=0;i<=n-1;i++){
	     if (a<=-1) {
	         area=((b-a)/n)*1;
	    printf ("%.4lf",area);
	    break; } }
	return 0; }