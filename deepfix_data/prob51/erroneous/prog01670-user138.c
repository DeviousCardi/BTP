#include <stdio.h>
void swap(int x,int y) {
    int t;
    t=x;
    x=y;
    y=t; }
int fn(int a[],int n,int k) {
    int i,j,cnt=0,max,p=;
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
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
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