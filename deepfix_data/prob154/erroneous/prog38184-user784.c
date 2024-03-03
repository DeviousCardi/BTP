#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,area;
    int n;
    scanf("%lf%lf%d",a,b,n);
    if(a==b)
  {  printf("0.0000");
     exit(0); }
    double x=(b-a)/n;
    for(i=1;i<=n;i++)
    { if(a<-1.0)
      area=a+(i*x);
    if((a.-1.0)&&(a<1.0))
     area=pow((a+(i*x)),2);
     else
     area=pow((a+(i*x)),3); }
     printf("%.4f",area);
	return 0; }