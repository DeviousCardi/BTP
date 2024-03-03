#include <stdio.h>
#include <stdlib.h>
int main() {
	double a, b, sum=0;
	int n, i;
	scanf("%lf %lf ", &a, &b);
	scanf("%d", &n);
	double m=(b-a)/n;
	for(i=0;i<=n;i++){
	    if((a+i*m)<-1){
	        sum=sum+m; }
	    if((a+i*m)>-1 && (a+i*m)<=1){
	        sum=sum+(a+i*m)*(a+i*m)*m; }
	    if((a+i*m)>1){
	        sum=sum+(a+i*m)*(a+i*m)*(a+i*m)*m; } }
	printf("%.4lf", sum);
	return 0; }