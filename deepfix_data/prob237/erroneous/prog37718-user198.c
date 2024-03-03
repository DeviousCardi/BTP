#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,k,p,ans=0;
    for(i=0;i<l-r;i++) {
        for(j=i+r-1,p=0;j>=i;j--) {
        for(k=i;k<j;k++) {
            if(arr[k]>arr[j])
            p++; } }
        if(ans<p)
        ans=p; }
  return ans; }
int main()
{int n,k,ans,i,;
scanf("%d%d",&n,&k);
for(i=o;i<n;i++) {
    scanf("%d",arr[i]); }
ans=getInversions(n,k);
printf("%d",ans);
    return 0; }