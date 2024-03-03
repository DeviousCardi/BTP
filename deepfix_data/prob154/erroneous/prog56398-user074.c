#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,p;
double a,b,sum,sum0,sum2,sum1;
scanf("%lf %lf %d",&a,&b,&n);
        sum0=0,sum1=0,sum2=0,sum=0;
   for(i=a;i<=(-1);i=i+((b-a)/n) {
        p=1;
        sum0=sum0+p*((b-a)/n); }
   while(i>(-1) &&i<=1) {
       p=i*i;
       sum1=sum1+p*((b-a)/n);
       i=i+((b-a)/n); }
   while(i>1 &&i<=b-(b-a)/n) {
       p=i*i*i;
       sum2=sum2+p*((b-a)/n);
       i=i+((b-a)/n); }
       sum=sum1+sum2+sum0;
   printf("%.4lf",sum);
return 0; }