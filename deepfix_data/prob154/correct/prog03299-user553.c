#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,x,m,d,s;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
	d=(b-a)/n;
	s=0.0;
	for(i=a;i<=x;i++){
	if(x<1){
	    if(x<=-1){
	        m=1; }
	else{
	    m=x*x; } }
	else{
	    m=x*x*x; }
	s=s+m*d; }
	printf("%0.4lf",s);
	return 0; }