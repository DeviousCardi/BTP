#include<stdio.h>
#include<stdlib.h>
int fx(int a) {
    int b;
    if(a<=-1) {
        b=1; }
    if((a>-1)&&(a<1)) {
        b=a*a; }
    if(a>=1) {
        b=a*a*a; }
    return b; }
int main() {
    double a,b,out;
    int n,i,sum=0;
    scanf("%lf %lf %d",&a,&b,&n);
    double dx=(b-a)/n;
    for(i=0;i<n;i++) {
        sum=sum+fx(i); }
    out=sum*dx;
    printf("%.4lf",out);
    return 0; }