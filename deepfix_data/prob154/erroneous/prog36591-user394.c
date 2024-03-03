#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double function(double x[i]){
    if(x[i]<=-1.0){return 1.0; }
    else if(x[i]>-1.0&&x[]<1.0){return pow(x[i],2);}
    else if(x[i>=1.0){return pow(x[i],3);} }
int main() {
    int n,i;
    double a,b,sum,k;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    double x[n];
    x[0]=a;
    k=(b-a)/n;
    for(i=1;i<n;i++){
        x[i]=x[i-1]+k; }
    sum=0.0;
    for(i=0;i<n;i++){
        sum=sum+(function(x[i])*k); }
    printf("%.4lf",sum);
	return 0; }