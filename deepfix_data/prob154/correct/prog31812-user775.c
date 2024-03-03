#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double n,dx,a,b,i,fa,fb,area;
	scanf ("%lf%lf%d",&a,&b,&n);
	 dx = (b-a)/n;
	 if ((a<=-1) && (b<=-1));
     fa=1;
     fb=1;
     if ((a>-1 && a<1) && (b>-1 && b<1));
     fa=a*a;
     fb=b*b;
     if ((a>=1) && (b>=1));
     fa=a*a*a;
     fb=b*b*b;
     for (i=fa;i=fb;i=i+dx){
         area=i*dx; }
     printf("%.4lf",area);
 	return 0; }