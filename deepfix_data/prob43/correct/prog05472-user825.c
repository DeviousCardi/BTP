#include <stdio.h>
#include <math.h>
int actual(int i) {
    if(i<0)
        return -i;
    else
        return i; }
int main() {
    double x;
    int f,g;
    int S,n,p;
    double a,b,area=0;
    scanf("%lf %lf",&a,&b);
    scanf(" %d",&n);
    p=(b-a)/n;
    for(x=a;x<=b;x=x+p){
        f=-x*x+3*x;
        g=2*(x*x*x)-(x*x)-5*x;
       S=(f-g);
        S=actual(S);
       area=area+S*p; }
   printf("%.4lf",area);
return 0; }