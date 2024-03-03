#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,c,area,x;
    int n;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    x=(b-a)/n;
    c=a;
    area=0;
    while(c<b) {
       if(c<=-1)
           area=area+x;
        else if(c<1)
            area=area+(c*c*x);
        else
            area=area + (c*c*c*x);
        c=c+x; }
    printf("%.4lf",area);
	return 0; }