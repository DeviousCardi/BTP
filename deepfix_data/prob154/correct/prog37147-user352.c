#include<stdio.h>
#include<stdlib.h>
double fx(double a) {
    double b;
    if(a<=-1) {
        b=1; }
    if((a>-1)&&(a<1)) {
        b=a*a; }
    if(a>=1) {
        b=a*a*a; }
    return b; }
int main() {
    double a,b,out,sum=0;
    int n,i;
    scanf("%lf %lf %d",&a,&b,&n);
    double dx=(b-a)/n;
    for(i=0;i<n;i++) {
        sum=sum+fx(a+(i*dx)); }
    out=sum*dx;
    printf("%.4lf",out);
    return 0; }