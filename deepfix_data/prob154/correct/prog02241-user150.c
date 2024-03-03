#include <stdio.h>
#include <stdlib.h>
const double q = 0.000001;
int main() {
    double a,b,c,d=0,e;
    int n,i;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    c=(b-a)/n;
    for(i=1;i<=n;i++) {
        e=a+c;
        if((a+1)<=q)
        a=1;
        if((e+1)<=q)
        (e)=1;
        if ((a+1)>q&&(a-1)<q)
        a=a*a;
        if ((e+1)>q&&(e-1)<q)
        (e)=(e)*(e);
        if((a-1)>=q)
        a=a*a*a;
        if((e-1)>=1)
        (e)=(e)*(e)*(e);
        if((a-e)>q)
        d=d+(e)*c;
        else
        d=d+a*c;
       a=a+i*c ; }
    printf("%.4lf",d);
	return 0; }