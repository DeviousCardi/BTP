#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,A=0,x;
    int n,i;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        x=a+(b-a)*i/n;
        if(x<=0)
        A=A+((2*x*x*x)-(8*x))*(b-a)/n;
        else
        A=A+((8*x)-(2*x*x*x))*(b-a)/n }
    printf("0.4%lf",A);
	return 0; }