#include <stdio.h>
#include <stdlib.h>
double a;
double b;
double d;
int func_val(int p);
int main() {
    double totarea=0.0;
	int n;
	int i=0;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	double d=(b-a)/n;
	printf("%lf",d);
	return 0; }