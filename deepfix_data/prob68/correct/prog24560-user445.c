#include<stdio.h>
double product(double n,double p) {
    double x;
    if(n==1) {
        scanf("%d",&x);
    return p*x; }
    scanf("%d",&x);
    p=p*x;
    return product(n-1,p); }
int main() {
   double n,d,p=1;
   scanf("%d",&n);
   d=product(n,p);
   printf("%d",d);
    return 0; }