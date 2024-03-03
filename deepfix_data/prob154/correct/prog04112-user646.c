#include <stdio.h>
#include <stdlib.h>
int main() {
     int n,s[n],i;
     double a,b,area,delt;
     scanf("%d",&n);
     scanf("%lf%lf",&a,&b);
     for(i=0;i<n;i++){
     scanf("%d",&s[i]);
     b=s[n-1];
     a=s[0];
     delt=(b-a)/n;}
    for(i=0;i<n;i++)
    area= s[i]*delt;
     printf("%.4lf",area);
    return 0; }