#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{int i,j,count;
    for(i=l;i<l+r-1;i++) {
        for(j=i+1;j<l+r;j++) {
            if(arr[i]>arr[j])
            count=count+1; } }
    return count; }
int max(int a,int b ){
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int n,k,i,l;
    scanf("%d%d",&n,&k);
    int a[n-k];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n-k+1;i++) {
        a[i]=getInversions(i,k-1); }
    l=a[0];
    for(i=1;i<n-k+1;i++) {
        l=max(l,a[i]); }
    printf("%d",l);
    return 0; }