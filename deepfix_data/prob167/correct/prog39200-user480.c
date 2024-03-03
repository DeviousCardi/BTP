#include<stdio.h>
long long unsigned int sum(long long int n,long long int a[n]) {
   static long long unsigned int s=0;
    if(n==0)
    return s;
    if(n>0){
        s=s+a[n-1];
        return sum(n-1,a); } }
int main() {
    long long int n,i;
    scanf("%lld",&n);
   long long int a[n],s;
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    s=sum(n,a);
    printf("%llu",s);
    return 0; }