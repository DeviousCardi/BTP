#include <stdio.h>
#include <stdlib.h>
double f(double x){
    double ans;
	if (x<=-1){
	   ans=-1; }
	else if((x>-1)&&(x<=1)){
	   ans=x*x; }
	else {
	   ans=(x*x)*x; }
	return ans; }
int main() {
	int n;
	double i,a,b,q,ans=0,m;
	scanf("%if%lf%d",&a,&b,&n);
	q=(b-a)/n;
	for(i=a;i<=b;i=i+q){
	    m=q*f(i);
	    ans=ans+m; }
	printf("%lf",ans);
	return 0; }