#include<stdio.h>
#include<limits.h>
int max(n){
    int i,t,max;
    scanf("%d",&max);
    for(i=1;i<n-1;i++) {
        scanf("%d",&t);
        if (t>max) max=t; }
    printf("\n");
    return max; }
int main()
{ int n, m;
    scanf("%d%d",&n,&m);
    int a[m],i;
    for(i=0;i<m;i++) {
        a[i]=max(4); }
    int min=a[0];
    for(i=0; i<m; i++) {
        if (a[i]<min) min=a[i]; }
    printf("%d",min);
    return 0; }