#include<stdio.h>
int arr[100],num;
int getInversions(int l,int r)
{  int i,j,max,inv=0;
for(i=l;i<=r;i++) {
    max=arr[i];
    for(j=i+1;j<=r;j++) {
        if(max>arr[j])
        inv++; } }
return inv; }
int main() {
    int n,k,i,max_inv;
    scanf("%d%d",&n,&k);
    int max[n];
    num=n;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;(i+k)<=n;i++) {
        max[i]=getInversions(i,k); }
       max_inv=max[0];
    for(i=1;i+k<=n;i++) {
        if(max_inv>max[i])
        continue;
        else
        max_inv=max[i]; }
    return 0; }