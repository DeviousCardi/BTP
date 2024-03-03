#include <stdio.h>
void swap(int x,int y) {
    int t;
    t=x;
    x=y;
    y=t; }
int fn(int a[],int n,int k) {
    int i,j,cnt=0,max;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]>=a[j])
            cnt++; }
        if(cnt==n) {
            max=a[i];
            swap(a[i],a[0]); } }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    if(n==1)
    return a[0];
    else
    return fn(a+1,n-1,k);
    return a[k-1]; }
int main() {
    int n,k,j,ans;
    scanf("%d %d\n",&n,&k);
    int a[n];
    for(j=0;j<n;j++)
    scanf("%d ",&a[j]);
    ans=fn(a,n,k);
    printf("%d",ans);
    return 0; }