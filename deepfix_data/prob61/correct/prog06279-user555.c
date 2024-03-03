#include<stdio.h>
int main() {
    int n,i,k,total,oldcount;
    scanf("%d %d",&n,&k);
    int input[n];
    for(i=0;i<n;i++)
        scanf("%d",&input[i]);
    int count[k+1],output[n];
    for(i=0;i<=k;i++)
        count[i]=0;
    for(i=0;i<n;i++)
        count[input[i]]+=1;
    total=0;
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total+=oldcount; }
    for(i=0;i<n;i++) {
        output[count[input[i]]]=input[i]; }
    for(i=0;i<n;i++) {
        printf("%d ",output[i]); }
    return 0; }