#include<stdio.h>
int a[100];
int getInversions(int l,int r)
{int i, j, count=0;
    for(i=l;i<=l+r-1;i++) {
        for(j=i+1;j<=l+r-1;j++) {
            if (a[j]<a[i]) count=count+1; } }
    return count; }
int main()
{   int n, k;
    scanf("%d%d",&n,&k);
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        printf("%d ",a[i]); }
    int b[n];
    for(i=0,i<=n-k+1;i++) {
        b[i]=getInversions(i,i+k-1);
        printf("\n%d",b[i]); }
    return 0; }