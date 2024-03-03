#include <stdio.h>
#include <stdlib.h>
double abs_diff(double a){
    return = (a>0)?a:-a; }
double length(double t){
    return = abs_diff((2*t*t*t)-(8*t)); }
int main() {
	int n,i;
	double a,b,sum;
	sum=0;
	printf("Enter a,b and N: ");
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&n);
	double X[n+1];
	for(i=0;i<=n;i++){
	    X[i]=a+(i*(b-a))/n }
	for(i=0;i<n;i++){
	    sum=sum+((length(X[i]))*(b-a))/n; }
	printf("%.4lf",sum);
	return 0; }