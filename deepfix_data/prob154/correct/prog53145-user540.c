#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	double a,b,p1,p2,sum=0;
	scanf("%lf%lf%d",&a,&b,&n);
	for(i=0;i<=n-1;i++) {
	    if (a==b) {
	        printf("0.0000");
	        break ; }
	    if (a<-1&&b<-1) {
	        p1 = (b-a)/n ; }
	    printf("%0.4lf",p1);
	    if (a<-1&&b>-1&&b<1) {
	        p2 = (1.0*(-1-a))/n + i*i*1.0 *(b+1)  ;
	        printf("%lf",p2); } }
	return 0; }