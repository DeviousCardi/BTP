#include<stdio.h>
long int a[100000];
long int sum(long int a[],long int n) {
    if(n==1)
    return a[0];
    else
    return a[n-1]-sum(a,n-1); }
int main() {
    long int n;
    scanf("%ld",&n);
    for(long int i=0;i<n;i++)
     scanf("%ld ",&a[i]);
     long int t;
     t=sum(a,n-1);
     printf("%ld",t);
    return 0; }