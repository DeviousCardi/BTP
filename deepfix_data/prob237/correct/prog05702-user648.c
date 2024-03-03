#include<stdio.h>
int arr[100],inv=0;
int getInversions(int l,int r) {
    int i,j;
    for(i=l;i<(l+r);i++) {
        for(j=i+1;j<(l+r);j++) {
            if(arr[i]>arr[j])
            inv=inv+1; } }
    return inv; }
int main() {
    int n,k,i,max;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n-k+1];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<(n-k+1);i++)
    {a[i]=getInversions(i,i+k-1);
    printf("%d ",a[i]); }
    max=a[0];
    for(i=1;i<(n-k+1);i++) {
        if(max<a[i])
        max=a[i]; }
    return 0; }