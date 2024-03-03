#include<stdio.h>
double rec(int t);
int main() {
    double y,z,i;
    int x;
    scanf("%d\n",&x);
    y=rec(x);
    printf("%lf",y);
    return 0; }
double rec(int t) {
    double a,b;
    scanf("%d ",&a);
    if(t==0)
    return 1;
    else
    b=a*rec(t-1);
    return b; }