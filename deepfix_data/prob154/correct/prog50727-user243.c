#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,l,i,sum=0;int n;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    l=(b-a)/n;
    for(i=a;i<b-0.1;i=i+l) {
        if(i<=(-1)) {
        sum=sum+l*1; }
    else
    if(i<1)
    {sum=sum+l*i*i; }
    else
    sum=sum+l*i*i*i; }
    printf("%0.4lf",sum);
	return 0; }