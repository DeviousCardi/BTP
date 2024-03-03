#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    double a, b, x, area=0, j;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%d", &n);
    x=(b-a)/n;
    for(j=(a+x)/2; j<=b; j=j+x)
    { if(x==0)
      { area=0;
        break; }
      if(j*2<=-1)
      {printf("*"); area+=x;}
      else if(a>=-1 && j*2<=1)
       area+=j*j*x;
      else if(a>=1)
       area+=j*j*j*x; }
    printf("%.4lf", area);
	return 0; }