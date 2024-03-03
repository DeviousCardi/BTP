#include<stdio.h>
int arr[100],n;
int max(int a,int b){
    if(a>=b)
    return a;
    else
    return b; }
int getInversions(int l,int r) {
    int count=0;
    for(int i=l;i<=r;i++) {
        for(int j=i;j<=r;j++) {
            if(arr[l]>arr[j]) {
                count=count+1; } }
        printf("%d ",count); }
      printf("%d ",count);
    return count; }
int main() {
    int n,k,l,r,mx=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(int i=1, j=k;i<=(n-k+1);i++,j++) {
        l=i-1;
        r=j-1;
        mx=max(mx,getInversions(l,r)); }
    printf("%d ",mx); }