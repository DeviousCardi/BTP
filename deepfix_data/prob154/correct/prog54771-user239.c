#include <stdio.h>
#include <stdlib.h>
int main() {
             double a,b;
             double area1;
             double totarea=0;
             scanf("%lf",&a);
             scanf("%lf",&b);
	          if(b<=-1)
	         { area1 = 1*(b-a);
	          totarea=totarea+area1;
	             printf("%.4lf",totarea); }
	return 0; }