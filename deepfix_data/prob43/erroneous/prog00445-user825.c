#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double x;
    int n,p;
    double area=0;
    double a,b;
    scanf("%d %d",&a&b);
    scanf("%d",&n);
    p=(b-a)/n;
    for(x=a;x<=(a+n*p);x=x+p){
        f=-x*x+3*x;
        g=2*x*x*x-x*x-5*x; }
    for(x=a;x<=(a+n*p);x=x+p){
        area=area+(f-g); }
   printf("lf",area);
return 0; }