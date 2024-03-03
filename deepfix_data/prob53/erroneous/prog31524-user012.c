#include<stdio.h>
long int a[1000000000];
return sum(long int a[],long int n) {
    if(n==1)
    return a[0];
    else
    return a[n]-sum(a,n-1); }
int main() {
    long int n;
    scanf("%ld",&n);
    for(long int i=0;i<n;i++);
    { scanf("%ld ",a[i]);
    printf("%ld",a[i]); }
    return 0; }