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
      else if(a+(i*x)<=-1)
      { printf("lala");
          area=area+ x; }
      else if(a+(i*x)>-1 && a+(i*x)<1)
      { printf("g");
         for(j=a; j<=b; j=j+x)
        { area=area+ j*j; } }
      else if(a+(i*x)>=1)
      { for(j=1; j<=b; j=j+x)
        { area+=j*j*j; } } }
    printf("%.4lf", area);
	return 0; }