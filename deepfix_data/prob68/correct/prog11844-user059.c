#include<stdio.h>
double n,l;
double product(double k,double i) {
    if(i==0)
    return 1;
    else {
        scanf("%lf",&l);
        return k*product(l,i-1); } }
int main() {
    double k;
    scanf("%lf",&n);
    scanf("%lf",&k);
    printf("%.0lf",product(k,n));
    return 0; }