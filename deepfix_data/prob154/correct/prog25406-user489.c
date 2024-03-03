#include <stdio.h>
#include <stdlib.h>
double f(double x) {
    double z;
    if(x<=-1) {
        double z=1; }
    if(-1<x&&x<1) {
        double z=x*x; }
    if(x>=1) {
        double z=x*x*x; }
    return z; }
int main() {
    int n;
	double a,b,c[n],area=1,m;
	int i,j;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    for(i=0;i<=n;i++) {
        c[i]=a+1.0*i*1.0*(b-a)/(1.0*n); }
    for(j=0;j<n;j++) {
        double m=c[j];
        double s=f(m)*1.0*(b-a)/(1.0*n);
        area =area+s; }
    printf("%.4lf",area);
	return 0; }