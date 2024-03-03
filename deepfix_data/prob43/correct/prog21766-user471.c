#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b;
    int i, n,sum=0;
    scanf("%lf%lf%d",&a,&b,&n);
for(i=0;i<=2;i++)
    sum==sum+(8*i-2*i*i*i)*((b-a)/n);
for(i=3;i<=n-1;i++)
    sum==(6+(2*i*i*i-8*i))*((b-a)/n);
    printf("%.4lf",sum);
	return 0; }