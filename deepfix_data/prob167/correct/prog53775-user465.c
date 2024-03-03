#include<stdio.h>
double sum(double n) {
    if(n==0)
    return 0;
    else {
        double a;
        scanf("%d",&a);
        return (a+sum(n-1)); } }
int main() {
    double n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0; }