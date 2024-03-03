#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,inv=0;
    for(i=r-1;i<r+l-1;i++) {
       for(j=i;j<r+l-1;j++)
       if(arr[j]<arr[i])
       inv++; }
    return inv; }
int main() {
    int n,l,j,i,max;
    scanf("%d\n%d",&n,&l);
    int a[n-l+1];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i+l-1<=n;i++) {
        for(j=i;j<i+l;j++)
        a[i]=getInversions(l,i); }
    max=a[0];
    for(i=0;i<n-l+1;i++)
    if(a[i]>max)
    max=a[i];
    printf("%d",max);
    return 0; }