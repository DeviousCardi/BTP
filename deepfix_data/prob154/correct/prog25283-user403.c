#include <stdio.h>
#include <stdlib.h>
 double f(int a){
    int c;
     if(a<=-1)
     return -1;
     if (a>=-1 && a<=1)
     return a*a;
     if (a>=1)
     c=a*a*a ;
     return c; }
int main() {
	int i,n;
	double a,b,x,q[500];
	scanf("%lf",&a);
	scanf("%lf",&b);
		scanf("%d",&n);
		x=((b-a)/n);
		q[0]=x;
		for (i=1;i<n;i++){
		    q[i]=a+x;
		    	printf("%lf",q[i]); }
	return 0; }