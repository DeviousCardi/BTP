#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double epsilon=0.000001;
int a1[100000];
void part(double a,double b,int n ){
    int i=0;
    for(i=0;i<=n;i++){
        a1[i]=a+i*(b-a)/n;} }
double f(int i){
    double d;
    d = abs(2*a1[i]*a1[i]*a1[i]-8*a1[i]);
return d; }
int main() {
	double a,b,sum=0;
	int n;
	int i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	void part(a,b,n);
	for(i=0;i<n;i++){
	    sum = sum + ((b-a)/n)*f(i);}
	return 0; }