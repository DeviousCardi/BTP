#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double f(double x) {
    double y;
    y=-pow(x,2)+3*x;
    return y; }
double g(double x) {
    double y;
    y=2*pow(x,3)-pow(x,2)-5*x;
    return y; }
int main() {
	int n,i;
	float a,b;
	double x[1000],s=0;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%d",&n);
	x[0]=a;
	for(i=1;i<n;i++) {
	    x[i]=x[i-1]+(b-a)/n; }
	for(i=0;i<n;i++) {
	    s=s+abs(f(x[i])-g(x[i])); }
	s=s*(b-a)/n;
	printf("%f\n",z);
	return 0; }