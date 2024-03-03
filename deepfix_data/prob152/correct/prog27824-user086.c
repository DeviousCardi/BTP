#include <stdio.h>
int  sum=0,m,sum1;
int sum2(int a[],int n) {
    if(n==1)
    return a[0];
    return a[n-1]+sum2(a,n); }
int recurse(int a[],int start,int n) {
    if(start==m-1) {
        if(sum==sum1) {
            return 1; }
        else
        return 0; }
    sum=sum+a[start];
    return recurse(a,start+1,n-1); }
int main() {
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    m=n/2;
    sum1=sum2(a,n)/2;
    printf("%d",recurse(a,0,n));
    return 0; }