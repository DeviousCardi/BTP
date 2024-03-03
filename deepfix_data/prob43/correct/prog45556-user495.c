#include <stdio.h>
#include <stdlib.h>
int abs (int a) {
    int c;
    if(a>=0) {
        c=a; }
    if(a<0) {
        c=(-a); }
    return c; }
int main() {
	int n,i;
	float delx;
	double a,b,sum=0,c;
	scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	scanf("%d",&n);
	delx=(b-a)/n;
	for(i=a;i<b;i++) {
	    c=(abs((2*(i^3))+(8*i)))*delx;
	    printf("%d\n",c);
	    sum=sum+c; }
	printf("%.4lf",sum);
	return 0; }