#include <stdio.h>
#include <stdlib.h>
double powe(double k, int c)
{double pos=1;
int u;
for(u=0;u<c;u++)
pos=pos*k;
return pos; }
double f(double x)
{double sum;
sum=-powe(x,2)+3*x;
return sum; }
double g(double y)
{double sn;
sn=2*powe(y,3)-powe(y,2)-5*y;
return sn; }
int main() {
	int n,i;
	double y1,y2,z,a,b,dx,in=0;
	dx=((b-a)/n);
	scanf("%lf %lf %d",&a,&b,&n);
	for(i=0;i<n;i++)
	{z=a+i*dx;
	y1=f(z);
	y2=g(z);
	printf("%lf",z)
	 if(y1>=y2)
	in=(y1-y2)*dx+in;
	 else
	 in=(y2-y1)*dx+in; }
	printf("%.4lf",in);
	return 0; }