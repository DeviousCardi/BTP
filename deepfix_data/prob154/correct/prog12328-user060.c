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
	printf("%0.4lf",f(-3));
	return 0; }