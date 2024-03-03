#include <stdio.h>
int main()
{float a1,a2,b1,b2,c1,c2,a,b,c,med;
scanf("%f%f%f",&a1,&b1,&c1);
scanf("%f%f%f",&a2,&b2,&c2);
a=(a1*40.0/50)+(a2*60.0/100);
b=(b1*40.0/50)+(b2*60.0/100);
c=(c1*40.0/50)+(c2*60.0/100);
if (a >= b)
{if(b>=c)
{med=b;}
else if(c<=a)
{med=c; }
else med=a;}
if(b>=a)
{if(c<=a)
{med=a;}
if(c>=a)
{if(c<=b)
med=b;
else
med=b;} }
printf("Median weighted score = %.2f",med);
	return 0; }