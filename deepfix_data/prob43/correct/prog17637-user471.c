#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,sum=0;
    int i, n;
    scanf("%lf%lf%d",&a,&b,&n);
for(i=0;i<=2;i++)
    sum=sum+(8*i-2*i*i*i)*((b-a)/n);
 sum=6*((b-a)/n);
for(i=3;i<=n-1;i++)
    sum=sum+(2*i*i*i-8*i)*((b-a)/n);
    printf("%.4lf",sum);
	return 0; }