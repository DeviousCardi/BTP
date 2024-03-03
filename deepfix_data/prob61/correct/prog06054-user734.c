#include <stdio.h>
int main() {
    int i,j,x,k,n;
    scanf("%d%d",&k,&n);
    int a[n],count[k+1];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k+1;i++)
    count[i]=0;
    for(i=0;i<n;i++) {
        x=a[i];
        count[x]+=1; }
    int total=0,oldCount;
    for(i=0;i<=k;i++) {
        x=count[i];
        for(j=0;j<=x;j++)
        printf("%d ",i); }
    return 0; }