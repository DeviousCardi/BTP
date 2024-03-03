#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,i,sum=0;
	int n=0;
	scanf("%lf%lf%d",&a,&b,&n);
	while(b>a)
	{for(i=a;i<=b;i=i+(b-a)/n) {
	    if(i<=-1) {
	        sum=sum+(b-a)/n; }
	    else
	    {if(i>-1&&i<1) {
	        sum=sum+(i*i); }
	    else
	    {if(i>=1) {
	        sum=sum+(i*i*i); } } } } }
	printf("%.4lf",sum);
	return 0; }