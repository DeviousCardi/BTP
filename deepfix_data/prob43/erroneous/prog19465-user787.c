#include <stdio.h>
#include <stdlib.h>
double h(double p){
    double c;
    if(p>0){
        c=8*p-2*p*p*p;}
        else if(p<0){
            c=2*p*p*p-8*p;}
            return c; }
int main() {
    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    int n,i,double sum=0;
    for(i=0;i<n;i++){
    sum=sum+((b-a)/n)*h(a+i*((b-a)/n))); }
printf(".4lf",sum)
	return 0; }