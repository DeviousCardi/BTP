#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{int i,j,count;
    for(i=l;i<l+r-1;i++) {
        for(j=i+1;j<l+r;j++) {
            if(a[i]>a[j])
            count=count+1; } }
    return count; }
int max(int a,int )
int main() {
    int n,k,r,i,l;
    scanf("%d%d",&n,&k);
    int a[n-k];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n-k;i++) {
        a[i]=getInversions(i,k-1); }
    l=a(0);
    for(i=1;i<n-k;i++) {
        l=max(l,a[i]); }
    printf("%d",l);
    return 0; }