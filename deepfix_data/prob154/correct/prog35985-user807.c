#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,x ;
	int n,i,j,k=0;
	int u[40],s[40];
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	x=(b-a)/n;
	if(x!=0)
	{for(i=a;i<=b;i=i+x) {
	    u[k]=i;
	    k++; }
	for(j=0;j<n;j++)
     	{if(u[j]<=-1)
	       {s[j]=1;}
	    else if(u[j]>-1&&u[j]<1)
	          {s[j]=(u[j]*u[j]);}
	         else
	          {s[j]=(u[j]*u[j]*u[j]);}
	         }}for(i=0;i<n;i++){ printf("%d",s[j]); }
	return 0; }