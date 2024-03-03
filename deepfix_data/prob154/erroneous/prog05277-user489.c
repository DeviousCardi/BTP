#include <stdio.h>
#include <stdlib.h>
double f(double x) {
    if(x<=-1) {
        double z=1; }
    if(-1<x&&x<1) {
        double z=x*x; }
    if(x>=1) {
        double z=x*x*x; }
    return z; }
int main() {
    int n;
	double a,b,c[n],area=0,m;
	int i,j;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    for(i=0;i<=n;i++) {
        c[i]=(a+(i*((b-a)/n))); }
    for(j=0;j<n;j++) {
        double m=c[j];
        double s=f(m)*((b-a)/n);
        area =area+s; }
    printf("%.4lf",area);
	return 0; }