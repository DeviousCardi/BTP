#include <stdio.h>
#include <stdlib.h>
    int main() {
    int i,n;
    double a,b,x[i],t[i],s;
    x[i]=a+(b-a)*i/n;
    t[i]=(x[i])*x[i];
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    if(b>a&&b<=-1)printf("%.4lf",b-a);
    else if(b>a&&a>=1)printf(".4lf",(b*b*b*b-a*a*a*a)/4);
    {if(b>-1&&b<1){for(i=1;i<n;i++) {x[i]=a+(b-a)*i/n;
    t[i]=(x[i])*x[i];s=s+t[i];
        if(a<=-1&&x[i]<=1&&x[i+1]>1)printf("%.4lf",(b-a)*s/n+x[i]-a);
    }}}
	return 0; }