#include<stdio.h>
int pro(int a[],int n) {
     if((n-1)==0)
     return a[0];
     else
     return a[n-1]*pro(a,n-1); }
int main() {
    int n,i;
    double m;
    int a[100000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    m=pro(a,n);
    printf("%lf",m); }