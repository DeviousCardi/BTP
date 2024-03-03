#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double mod(double g) {
   if(g>=0)
   return g;
   else
   return (-1*g); }
int main() {
    int i,n;
    double a,b,sum=0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    double x[n];
    for(i=0;i<n;i++) {
        x[i]=a+(b*(i/float'(n-1)')); }
    for(i=0;i<n;i++) {
        printf("%lf\n",x[i]);
        sum=sum+((8*x[i])-(2*pow(x[i],3)))*((b-a)/n);
        sum=mod(sum); }
    printf("%.4lf",sum);
	return 0; }