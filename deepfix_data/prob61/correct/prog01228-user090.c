#include<stdio.h>
int main() {
    int n,k,i,x;
     scanf("%d%d",&n,&k);
    int arr[n],count[k],output[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<=k;i++) {
        count[i]=0 ; }
    for(x=0;x<n;x++) {
              count[arr[x]]=count[arr[x]]+1; }
    int total=0,oldcount;
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total+=oldcount; }
    for(x=0;x<n;x++)
        {output[count[arr[x]]]=arr[x];
        count[arr[x]]=count[arr[x]]+1; }
    for(x=0;x<n;x++) {
        printf("%d ",output[x]); }
    return 0; }