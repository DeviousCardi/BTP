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
	scanf("%lf%lf%d",&a,&b,&n);
	q=(b-a)/n;
	if(a!=b){
	for(i=a;i<b;i=i+q){
	    m=f(i);
	    ans=ans+m; }
	printf("%0.4lf",ans*q); }
	else{
	    printf("0.0000"); }
	return 0; }