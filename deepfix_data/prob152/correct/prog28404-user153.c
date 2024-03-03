#include <stdio.h>
int check(int n,int arr[],int i)
{if(i==n) {
    return 0; }
    int sum1,sum2;
    sum1=sum(n,arr,0,i,0);
    sum2=sum(n,arr,i+1,n-1,0);
    if(sum1==sum2) {
        return 1; }
    else {
        int p=check(n,arr,i+1);
        return p; } }
int sum(int n,int arr[],int starti,int endi,int ans)
{if(starti>endi) {
  return ans; }
 ans=ans+arr[starti];
 int q=sum(n,arr,starti+1,endi,ans);
 return q; }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    for(i;i<=n-1;i++) {
        scanf("%d",&arr[i]); }
    int q=check(n,arr,0);
    if(q==1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }