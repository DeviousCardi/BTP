#include<stdio.h>
#include<stdlib.h>
int main() {
    int total=0,n,k,i,x,oldcount;
    scanf("%d%d",&n,&k);
    int arr[n],count[k+2],output[n];
    for(i=0;i<k;i++)
        count[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(x=0;x<k;x++) {
        for(i=0;i<n;i++) {
            if(arr[i]==x)
                count[x]+=1; } }
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total+=oldcount; }
    for(i=0;i<n;i++) {
        for(x=0;x<=k;x++) {
            if(arr[i]==x) {
                output[count[x]]=x;
                count[x]+=1; } } }
    for(i=0;i<n;i++) {
        printf("%d ",output[i]); }
    return 0; }