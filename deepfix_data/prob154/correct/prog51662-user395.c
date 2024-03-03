#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,ans;
	scanf("%lf%lf%d",&a,&b,&n);
	if(a<-1&&b<-1) {
	    ans=1; }
	  if (a>=1&&b>=1) {
	      ans=((b*b*b*b)-(a*a*a*a))/4.0; }
	    if (a<-1&&b>-1&&b<1) {
	        ans=-1-a+(b*b*b-1)/3.0; }
	    if (a<-1&&b>1) {
	        ans=-1-a+2.0/3+(b*b*b*b-1)/4.0; }
	    if (a>-1&&a<1&&b>-1&&b<1) {
	        ans=(b*b*b-a*a*a)/3.0; }
	    if(a>-1&&a<1&&b>1) {
	        ans=(1-a*a*a)/3.0+(b*b*b*b-1)/4.0; }
	    if(a==-1&&b==1) {
	        ans=0.75; }
	       printf("%.4lf",ans);
	return 0; }