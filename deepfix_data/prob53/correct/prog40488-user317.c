#include<stdio.h>
int recur(long long int a[],int n,int i){
    static long long int r=0;
    scanf("%lld ",&a[i]);
    r-=a[i];
    if(n==1){
    return r+2*a[0]; }
    else
    return recur(a,n-1,++i); }
int main() {
     int n;
    scanf("%d",&n);
    long long int a[n];
    printf("%lld",recur(a,n,0));
    return 0; }