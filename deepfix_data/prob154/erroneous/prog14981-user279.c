#include <stdio.h>
#include <stdlib.h> #
int main() {
    int n;
    double a,b,sum1=sum2=sum3=0,sum;
    scanf("%d%lf%lf",&n,&a,&b);
    for(n=a;n<=(-1);n=n+(b-a)/n) {
        sum1=sum1+(-1-a); }
    for(n=-1;n<1;n=n+(b-a)/n) {
        sum2=sum2+(n*n)*((b-a)/n); }
    for(n=1;n<=b;n=n+(b-a)/n) {
        sum3=sum3+(pow(n,3))*((b-a)/n); }
        sum=sum1+sum2+sum3;
        printf("%.4lf",sum);
	return 0; }