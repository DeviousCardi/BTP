#include <stdio.h>
void swap(int x,int y) {
    int t;
    t=x;
    x=y;
    y=t; }
int fn(int a[],int n,int k) {
    int i,j,cnt=0,max,p=0;
    int b[n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]>=a[j])
            cnt++; }
        if(cnt==n) {
            max=a[i];
            swap(a[i],a[0]);
            b[p]=a[i];
            p++; } }
    if(n==1)
    return a[0];
    else return fn(a+1,n-1,k); }
int main() {
    int n,k,j,ans;
    scanf("%d %d\n",&n,&k);
    int a[n];
    for(j=0;j<n;j++)
    scanf("%d ",&a[j]);
    ans=fn(a,n,k);
    printf("%d\n",ans);
    return 0; }