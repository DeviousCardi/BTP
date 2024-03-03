#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double func1 (double z) {
    double ans;
    ans=(-z*z)+(3*z);
    return ans; }
double func2 (double z) {
    double ans;
    ans=(2*z*z*z)-(z*z)-(5*z);
    return ans; }
int main() {
    double a,b,sum,temp=0.0,s;
    int n,i;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        s=(func1(a+(b-a)/n))-(func2(a+(b-a)/n));
        temp = abs(s)*(b-a/n);
        sum=sum+temp; }
    printf("%.4f",sum);
    int d;
    d=abs(-5.5);
    printf("%d",d);
	return 0; }