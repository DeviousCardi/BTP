#include<stdio.h>
int arr[100];
int max(int a,int b) {
    if(a>=b)
    return a;
    else
    return b; }
int getInversions(int l,int r)
{  int add=0;
   for(int j=l;j<l+r-1;j=j+1) {
        for(int k=j+1;k<=l+r-1;k=k+1) {
            if(arr[j]>arr[k])
            add=add+1; } }
    return add; }
int main()
{   int n,k,i,l,r,c;
    scanf("%d%d",&n,&k);
    for(int b=0;b<n;b=b+1)
    scanf("%d",&arr[b]);
    int num[n-k+1];
    for(i=0;i<=n-k;i=i+1) {
        l=i;
        r=k;
        num[i]=getInversions(l,r); }
    if(n>k) {
        for(int a=1;a<=n-k;a=a+1) {
            c=max(num[0],num[a]);
            num[0]=c; }
    printf("%d",c); }
    else {
        printf("%d",num[0]); }
    return 0; }