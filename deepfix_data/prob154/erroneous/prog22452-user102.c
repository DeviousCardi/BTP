#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,l;
double a,b,area,dx,dA;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%d",&n);
dx=(b-a)/n;
double x[n+1];
double h[n];
x[0]=a;x[n]=b;
for(i=1;i<n;i++){
    x[i]=a+i*dx; }
for(j=0;j<n;j++){
    h[j]=f(x[j]); }
for(l=0;l<n;l++){
    dA=dx*(h[l]);
    area=area+dA; }
printf("%lf",area);
	return 0; }
double f(double x){
   double ans;
    if(x<=-1)
    {ans=1;}
    if(x>-1&&x<1)
    {ans=x*x;}
    if(x>=1)
    {ans=x*x*x;}
return ans; } }