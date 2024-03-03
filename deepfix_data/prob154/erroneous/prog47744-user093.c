#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double function(double x[i])
{ double f;
  if (x[i]<=-1)
    f=1;
  if (x[i]<-1 && x[i]<1)
    f=pow([x],2);
  if (x[i]>=1)
    f=pow(x[i],3);
  return(f); }
double area(double a,double b,int n)
{ double area=0;
  int i;
  double x[20];
  x[0]=a;
    for(i=0;i<=n;i++)
        {  x[i]=a+(i)*(b-a)/n; }
    for (i=0;i<=n-1;i++)
        {area=area+(function(x[i])*(b-a))/n }
          return(area); }
int main()
{   int n;
    double a,b;
    scanf("%lf %lf %d",&a,&b,&n);
    printf("%.4lf",area(a,b,n));
	return 0; }