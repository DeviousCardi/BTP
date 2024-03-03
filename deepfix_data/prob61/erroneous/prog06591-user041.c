#include<stdio.h>
int main() {
    int n,k,i,j,l=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n],c[n],o[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=k;i++)
    c[i]=0;
    for(i=0;i<n;i++)
    c[a[i]]=c[a[i]]+1;
    for(i=0;i<=k;i++)
    o[c[i]]=i;
    for(i=0;i<n;i++)
    printf("%d "o[i]);
    return 0; }