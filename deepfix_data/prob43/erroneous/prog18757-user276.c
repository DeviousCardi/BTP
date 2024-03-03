#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double mod (double a){
    if (a>=0) return a;
    else return -a; }
double f(double c) {
    return mod(-(c*c)+(3*c)); }
double g(double d) {
    return mod((2*power(3,d)-(d*d)-(5*d)); }
int main() {
	int i,n;
	double k,e,l,z,area;
	scanf ("%lf%lf",&k,&l);
	scanf ("%d",&n);
	while (k<=l){
	 e=(l-k)/n;
	 area=0;
	 for (i=0;i<n;i++) {
	     z=k+e*i;
	     area=area+(f(z)+g(z));
	 }printf ("%lf",area); }
	return 0; }