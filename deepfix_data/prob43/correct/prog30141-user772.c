#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b;
    int n;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
    if (a==b) {
        printf("0.0000");
        return 0; }
    double l;
    l=(b-a)/n;
    printf("%lf",l);
    double sum1=0.0,sum2=0.0;
    double i=a;
    while (i>=a&&i<=b) {
        if (((-i*i)+3*i)>(2*i*i*i-i*i-5*i)) {
            sum1=sum1+(((-i*i)+3*i)-2*i*i*i-i*i-5*i)*l; }
        else if (((2*i*i*i-i*i)-5*i)>((-i*i)+3*i)) {
            sum2=sum2+((2*i*i*i-i*i-5*i)-((-i*i)+3*i))*l; }
        i=i+l; }
    printf("%.4lf",sum1+sum2);
	return 0; }