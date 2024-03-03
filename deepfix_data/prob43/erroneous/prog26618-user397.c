#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double F(int);
double G(int);
int main() {
	double a,b;
	int n,i,j;
	scanf("%lf %lf %d",&a,&b,&n);
	double x[n];
    x[0]=a;
    double sum;
    double del_x=(b-a)/n;
    for(i=1;i<n-1;i++) {
       x[i]=x[0]+i*del_x; }
    x[n-1]=b;
    for(j=0;j<n;j++) {
        sum+=fabs(F(j)-G(j))*del_x; }
    printf("%.4lf",sum);
    return 0; }
double F(int x) {
    return -(x*x)+3*x; }
double G(int y) {
    return 2*y*y-x*x-5*x; }