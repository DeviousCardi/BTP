#include<stdio.h>
main() {
    int n,k,arr[1000],count[1000],x,oldCount,total=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        count[x]+=1; }
    for(i=0;i<k;i++) {
        oldCount=count[i];
        count[i]=total;
        total+=oldCount; }
    for(int i=0;i<k;i++) {
        for(int j=0;j<count[i])
        arr[j]=i; }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]); }