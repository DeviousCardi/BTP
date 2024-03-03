#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    double a, b, x, area=0, j;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%d", &n);
    x=(b-a)/n;
    for(i=1; i<=n; i++)
    { if(x==0)
      { area=0;
        break; }
      else if(a+(i*x)<=-1) {
          area=area+ x; }
      else if(a+(i*x)>-1 && a+(i*x)<=1) {
         for(j=(a+x)/2; j<=b; j=j+x)
        { printf("g");
            area=area+ j*j*x; } }
      else if(a+(i*x)>=1)
      { for(j=(a+x)/2; j<=b; j=j+x)
        { printf("f");
            area+=j*j*j*x; } } }
    printf("%.4lf", area);
	return 0; }