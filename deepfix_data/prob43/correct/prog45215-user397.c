#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double F(double);
double G(double);
int main() {
	double a,b;
	int n,i,j;
	scanf("%lf %lf %d",&a,&b,&n);
	double x[n];
    x[0]=a;
    double sum=0.0;
    double del_x=(b-a)/(n);
    for(i=1;i<n-1;i++) {
       x[i]=x[0]+i*del_x; }
    x[n]=b;
    for(j=0;j<n;j++) {
        sum+=(fabs(F(x[j])-G(x[j])))*del_x; }
    printf("%.4lf",sum);
    return 0; }
double F(double x) {
    return -(x*x)+3*x; }
double G(double y) {
    return 2*y*y*y-y*y-5*y; }