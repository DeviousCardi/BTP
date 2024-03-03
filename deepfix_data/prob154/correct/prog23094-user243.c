#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,l,i,sum;int n;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    l=(b-a)/n;
    for(i=a;i<b;i=i+l) {
        if(i<=(-1)) {
        sum=sum+l*1; }
    else
    if(i<1)
    {sum=sum+l*i*i; }
    else
    sum=sum+l*i*i*i; }
    printf("%lf",sum);
	return 0; }