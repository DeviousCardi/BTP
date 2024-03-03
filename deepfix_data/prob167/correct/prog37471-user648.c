#include<stdio.h>
long sumi(long a[],int n) {
    static long sum =0;
    sum=sum+a[n-1];
    if(n==0)
    return sum;
    return sumi(a,n-1); }
int main() {
    int n,i;
    long a[100000],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    sum=sumi(a,n);
    printf("%ld",sum); }