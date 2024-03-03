#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,inv=0;
    for(i=l;i<=l+r-1;i++) {
       for(j=i;j<r+l-1;j++)
       if(arr[j]<arr[i])
       inv++; }
    return inv; }
int main() {
    int n,r,i,max;
    scanf("%d\n%d",&n,&r);
    int a[n-r+1];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n+1-r;i++) {
        a[i]=getInversions(i,r); }
    max=a[0];
    for(i=0;i<n-r+1;i++)
    if(a[i]>max)
    max=a[i];
    printf("%d",max);
    return 0; }