#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int actual(int i) {
    if(i<0){
        return -i; }
    else return i; }
int main() {
    double x;
    int t,f,g;
    int S,n,p;
    double area=0;
    double a,b;
    scanf("%lf %lf",&a,&b);
    scanf("%d",&n);
    p=(b-a)/n;
    for(x=a;x<=b;x=x+p){
        f=-x*x+3*x;
        g=2*x*x*x-x*x-5*x;
       S=(f-g);
       t=actual(S);
       area=area+t*p;}
    for(x=a;x<=b;x=x+p){ }
   printf("%lf",area);
return 0; }