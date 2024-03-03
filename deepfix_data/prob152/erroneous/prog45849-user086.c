#include <stdio.h>
int  sum=0,m;
int recurse(int a[],start,int n) {
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
    printf("%d",recurse(a,0,n);
    return 0; }