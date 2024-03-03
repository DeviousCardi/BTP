#include <stdio.h>
int main()
{float a1,a2,b1,b2,c1,c2,a,b,c,med;
scanf("%f %f %f",&a1,&b1,&c1);
scanf("%f %f %f",&a2,&b2,&c2);
a=(a1*40.0/50.0)+(a2*60.0/100.0);
b=(b1*40.0/50.0)+(b2*60.0/100.0);
c=(c1*40.0/50.0)+(c2*60.0/100.0);
if(a<=b)
{if(b<=c)
    med=b;
else if(a<=c);
    med=c;
else
    med=a; }
else
{if(a<=c)
    med=a;
else if(b<=c);
    med=c;
else
    med=b; }
	printf("%.2f",med);
	return 0; }