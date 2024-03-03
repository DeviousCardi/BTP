#include<stdio.h>
int arr[100];
int max(int a,int b) {
    if(a>=b)
    return a;
    else
    return b; }
int getInversions(int l,int r)
{  int add=0,p;
   for(int j=l;j<l+r-1;j=j+1) {
        for(int k=j+1;k<=l+r-1;k=k+1) {
            if(arr[j]>arr[k])
            add=add+1; }
        p=add;
        add=0; }
    return p; }
int main()
{   int n,k,i,l,r,c;
    scanf("%d%d",&n,&k);
    for(int b=0;b<n;b=b+1)
    scanf("%d",&arr[b]);
    int num[n-k+1];
    for(i=1;i<=n-k+1;i=i+1) {
        l=i;
        r=k;
        num[i-1]=getInversions(l,r); }
    for(int a=1;a<n-k+1;a=a+1) {
       c=max(num[0],num[a]); }
    printf("%d",c);
    return 0; }