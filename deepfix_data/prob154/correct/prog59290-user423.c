#include <stdio.h>
#include <stdlib.h>
    double function(double i);
        double function(double i){
        if (i<=-1)
            return 1;
        if ( (i>-1) && (i<1) )
            return i*i;
        if (i>=1)
            return i*i*i;}
double main() {
	double a,b,i,j,area=0.0;
	int n;
	scanf("%lf %lf %d",&a,&b,&n);
	for(i=0;i<=n-1;i++) {
	        area = area+ ( function(i) * (b-a)/n ); } {
	    printf ("%.4lf",area); }
	return 0; }