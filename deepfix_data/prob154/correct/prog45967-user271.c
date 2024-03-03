#include <stdio.h>
#include <stdlib.h>
int main() {  double a,b,a2=0,a1,a3=0,A;
int i,n;
scanf("%d\n",&n);
scanf("%lf,%lf",&a,&b);
double x[n];
for(i=0;i<n;i++)
{  x[i]=a+(i*(b-a))/n;
{if(x[i]<=-1)
{a1=a+1;}}
     {if((x[i]>-1)&&(x[i]<1))
       {a2=(x[i]*x[i])*(x[i+1]-x[i]);
         a2=a2+a2;} }
{if(x[i]>1)
{a3=x[i]*x[i]*x[i]*(x[i+1]-x[i]);
a3=a3+a3;}} }
A=a1+a2+a3;
printf("%lf",A);
	return 0; }