#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	double a,b,delta,p1,p2,sum=0;
	scanf("%lf%lf%d",&a,&b,&n);
	delta = ((b-a))/n ;
	for(i=0;i<=n-1;i++) {
	    if (a==0 && b==0) {
	        printf("0.4d",b-a);
	        break ; }
	    if (a<-1&&b<-1) {
	        p1 = sum + delta ; }
	    printf("%0.4lf",p1);
	    if (a<-1&&b>-1&&b<1) {
	        p2 = (1.0*(-1-a))/n + i*i*1.0 *(b+1)  ;
	        printf("%lf",p2); } }
	return 0; }