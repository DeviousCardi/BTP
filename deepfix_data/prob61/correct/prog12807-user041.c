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
    c[a[i]]+=1;
    int total=0,oldc;
    for(i=0;i<=k;i++) {
        oldc=c[i];
        c[i]=total;
        total+=oldc;
        for(j=c[i];j<total;j++)
        o[j]=i; }
    for(i=0;i<total;i++)
    printf("%d ",o[i]);
    return 0; }