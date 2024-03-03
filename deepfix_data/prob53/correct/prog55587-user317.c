#include<stdio.h>
int recur(int a[],long long int n,int i){
    static int r=0;
    scanf("%d ",&a[i]);
    r-=a[i];
    if(n==1){
    return r+2*a[0]; }
    else
    return recur(a,n-1,++i); }
int main() {
    long long int n;
    scanf("%lld",&n);
    int a[n];
    printf("%d",recur(a,n,0));
    return 0; }