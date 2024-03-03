#include<stdio.h>
int main() {
    int i,n,k,x,oldCount,total=0;
    scanf("%d %d",&n,&k);
    int count[k+1],output[n];
    for(i=0;i<=k;i++)
        count[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&x);
        count[x]++; }
    for(i=0;i<=k;i++) {
        oldCount=count[i];
        count[i]=total;
        total+=oldCount; }
    for(x=0;x<=k;x++) {
        for(;count[x]<count[x+1];count[x]++)
            output[count[x]]=x; }
    for(i=0;i<n;i++)
        printf("%d ",output[i]); }