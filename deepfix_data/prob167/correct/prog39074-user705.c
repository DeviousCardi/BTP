#include<stdio.h>
long long int sum(long long int ar[],int n,int start){
    if(start==n-1) {
        return ar[start]; }
    else {
        return ar[start]+sum(ar,n,start+1); } }
int main() {
    int n;
    long long int s1,a[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%lld",&a[i]); }
    s1=sum(a,n,0);
    printf("%lld",s1);
    return 0; }