#include <stdio.h>
#include <stdlib.h>
double calculatef(double i) {
    return -(i*i)+(3*i); }
double calculateg(double i) {
    return (2*i*i*i)-(i*i)-(5*i); }
double summation(double x,int n) {
    double k,s,g,f,i;
         for(i=0;i<n-1;i++) {
        g=calculateg(i);
        printf("%lf\n",g)
        f=calculatef(i);
        printf("%lf\n",f)
        if(f>g)
        k=f-g;
    else k=g-f;
    printf("%lf\n",k)
    s=s+(k*x);
    printf("lf\n",s)}
 return s; }
int main() {
	double a,b,x,sum;
	int n;
	scanf("%lf %lf %d ",&a,&b,&n);
	x=(b-a)/n;
	sum=summation(x,n);
	printf("%.4lf",sum);
	return 0; }