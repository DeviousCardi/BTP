#include<stdio.h>
int pro(double a[10000],int n,double product);
int main() {
    int n,i;
    double a[10000],product=1;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%lf",&a[i]); }
    printf("%d",pro(a,n,product));
    return 0; }
pro(double a[],int n,double product) {
    if(n==0)
    return 1;
    else
    product=a[n-1]*pro(a,n,product);
    return product; }