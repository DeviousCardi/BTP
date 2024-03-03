#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,m,d,s;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
	d=(b-a)/n;
	s=0.0;
	for(i=1;i<=(b-a)/n;i++){
	if(i<1){
	    if(i<=-1){
	        m=1; }
	else{
	    m=i*i; } }
	else{
	    m=i*i*i; }
	s=s+m*d; }
	printf("%0.4lf",s);
	return 0; }