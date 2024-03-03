#include <stdio.h>
#include <stdlib.h>
double f(double x){
    double l;
    if(x<=-1){
        l=1; }
    else if((-1<x)&&(x<1)){
        l=x*x; }
    else{
        l=x*x*x; }
   return l; }
int main() {
    int n;
    double a,b;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
    int i;
    double r,sum=0;
    for(i=0;i<n;i++){
        r=a+i*(b-a)/n;
        sum=sum+f(r)*(b-a)/n; }
    printf("%.4lf",sum);
	return 0; }