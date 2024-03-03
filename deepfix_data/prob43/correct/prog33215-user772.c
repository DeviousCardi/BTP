#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b;
    int n;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
    double l;
    l=(b-a)/n;
    double A=0.0,B=0.0;
    double sum1=0.0,sum2=0.0;
    double i=a;
    while (i>=a) {
        if (((-i*i)+3*i)>(2*i*i*i-i*i-5*i)) {
            A=(((-i*i)+3*i)-2*i*i*i-i*i-5*i)*l;
            sum1=sum1+A; }
        else if (((2*i*i*i-i*i)-5*i)>((-i*i)+3*i)) {
            B=((2*i*i*i-i*i-5*i)-((-i*i)+3*i))*l;
            sum2=sum2+B; }
        i=i+l; }
    printf("%lf",sum1+sum2);
	return 0; }