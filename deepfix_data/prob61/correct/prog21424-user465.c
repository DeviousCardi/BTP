#include<stdio.h>
main() {
    int n,k,arr[1000],count[1000],x,oldCount,total=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        count[x]++; }
    for(int i=0;i<k;i++) {
        oldCount=count[i];
        count[i]=total;
        total+=oldCount; }
    count[k]=n-1;
    for(int i=0;i<k;i++) {
        for(int j=count[i];j<count[i+1];j++)
            arr[j]=i; }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]); }