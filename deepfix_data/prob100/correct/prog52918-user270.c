#include<stdio.h>
#include<limits.h>
int max(n){
    int i,t,max;
    scanf("%d",&max);
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        if (t>max) max=t; }
    return max; }
int main()
{ int n, m;
    scanf("%d%d",&n,&m);
    int a[m],i;
    for(i=0;i<m;i++) {
        a[i]=max(4);
        printf("%d ",a[i]); }
    return 0; }