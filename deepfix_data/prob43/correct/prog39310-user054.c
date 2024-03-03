#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f (double z) {
    double ans;
    ans=(-z*z)+(3*z);
    return ans; }
double g (double z) {
    double ans;
    ans=(2*z*z*z)-(z*z)-(5*z);
    return ans; }
int main() {
    double a,b;
    int n;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    n=abs(-5);
    printf("%d",n);
	return 0; }