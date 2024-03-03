#include <stdio.h>
#include <stdlib.h>
const double epsilon=0.000001;
int main() {
	int i,n;
	double a,b,x;
	double len_sub;
	double sum=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	len_sub=((b-a)/n);
	for(i=a;i<b;i=i+len_sub) {
	    if(i<=-1) {
	        x=1; }
	    else if(i>-1&&i<1) {
	        x=i*i; }
	    else {
	        x=i*i*i; }
	    sum=sum+x*len_sub; }
	printf("%lf",sum);
	return 0; }