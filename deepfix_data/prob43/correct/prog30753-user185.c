#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double a,b,n;
    scanf("%lf%lf%lf",&a,&b,&n);
    double i;double area=0;
    for(i=a;i<b;i=i+ (b-a)/n){
    area=area+abs(2*i*i*i-8*i)*((b-a)/n); }
    printf("%1.4lf",area);
	return 0; }