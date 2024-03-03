#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,x,area=0.0;
	int n,i,j,k=0,l;
	int u[40],s[40];
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	x=(b-a)/n;
	for(i=a;i<=b;i=i+x) {
	    u[k]=i;
	    k++; }
	for(j=0;j<n;j++)
	{if(u[j]<=-1)
	 {s[j]=1;}
	 else if(u[j]>-1&&u[j]<1)
	 {s[j]=(u[j]*u[j]);}
	 else
	 {s[j]=(u[j]*u[j]*u[j]);} }
	for(l=0;l<n;l++)
	{area=area+x*s[l];}
	printf("%.4lf",area);
	return 0; }