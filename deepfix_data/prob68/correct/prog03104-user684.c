#include<stdio.h>
double prod(int n) {
    int a;
    scanf("%d ",&a);
    if(n==1)
        return a;
    return a*prod(n-1); }
int main() {
    int n;
    scanf("%d\n",&n);
    double p=prod(n);
    printf("%.0lf",p);
    return 0; }