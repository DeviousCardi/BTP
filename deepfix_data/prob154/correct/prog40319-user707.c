#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,f,sum,ivl=0; int i,j,k,n=0;
	int x[n+1];
	scanf("%lf",&a);
	scanf("%lf",&b);
    scanf("%d",&n);
    ivl=(b-a)/n;
    for(k=0;k<n+1;k++) {
        x[k]=a+(k*ivl); }
	for(i=0;i<n+1;i++) {
	if(x[i+1]<=(-1)) {
        f=1; }
	else
	if((-1<x[i+1])&&(x[i+1]<1))
    {	f=x[i+1]*x[i+1];}
	else
    {	f=x[i+1]*x[i+1]*x[i+1];}
        sum=sum+f*ivl; }
	printf("%.4lf",sum);
	return 0; }