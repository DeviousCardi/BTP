#include<stdio.h>
int sum(int x[],int n) {
    if(n==0)
    return x[0];
    return (x[n]+sum(x,n-1)); }
int main() {
    int x[100],n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]); }
    int sum1;
    sum1=sum(x,n-1);
    return 0; }