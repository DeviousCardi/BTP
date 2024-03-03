#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0;
    for(int i=l;i<l+r;i++) {
        for(int j=i;j<l+r;j++) {
            if(arr[i]>arr[j])
            count++; } }
    return(count); }
int main() {
    int n,k,inv[1000],ans;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<=n-k+1;i++)
    inv[i]=getInversions(i,k);
    ans=inv[0];
    for(int i=0;i<n-k+1;i++) {
        if(inv[i]>ans)
        ans=inv[i]; }
    printf("%d",ans);
    return 0; }