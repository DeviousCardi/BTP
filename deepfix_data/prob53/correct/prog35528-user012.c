#include<stdio.h>
long int a[100000];
long int sum(long int a[],long int n) {
    if(n==1)
    return a[0];
    else
    return sum(a,n-1)-a[n]; }
int main() {
    long int n;
    scanf("%ld",&n);
    for(long int i=1;i<=n;i++)
     scanf("%ld ",&a[i]);
     long int t;
     t=sum(a,n);
     printf("%ld",t);
    return 0; }