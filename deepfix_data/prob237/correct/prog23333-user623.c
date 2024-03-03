#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{  int max,i,j,inv=0;
for(i=l;i<r;i++) {
    max=arr[i];
    for(j=i+1;j<r;j++) {
        if(max>arr[j])
        inv++; } }
return inv; }
int main() {
    int n,k,i;
    scanf("%d%d",&n,&k);
    int max[n%k];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=1;i<n%k;i++) {
        max[i-1]=getInversions(i,k); }
    return 0; }