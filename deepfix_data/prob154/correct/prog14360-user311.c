#include <stdio.h>
#include <stdlib.h>
double area (double);
double i,width;
int main() {
	int n,ans=0 ;
	double a,b;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	i=0;
	width = ((b-a)*(1.0))/n;
	for(i=a;i<b;i=i+width) {
	    if(i<=-1){
	       ans=ans + area (1.0); }
	    if(i>-1&&i<1){
	        ans=ans + area (i*i); }
	    if(i>=1){
	        ans=ans + area (i*i*i); } }
	return 0; }
double area (double f) {
    int term=0;
    term = f*width;
    return term ; }