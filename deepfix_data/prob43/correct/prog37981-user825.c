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
    int n,p;
    double area=0;
    double a,b;
    scanf("%lf %lf",&a,&b);
    scanf("%d",&n);
    p=(b-a)/n;
    for(x=a;x<=b;x=x+p){
        f=-x*x+3*x;
        g=2*x*x*x-x*x-5*x; }
    for(x=a;x<=(a+n*p);x=x+p){
         t=actual(f-g);
        area=area+t*p; }
   printf("%lf",area);
return 0; }