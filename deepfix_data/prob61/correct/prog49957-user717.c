#include<stdio.h>
int main() {
    int t=0,i,j,k,n;
    scanf("%d %d",&n,&k);
    int input[n];int output[n];
    int count[k+1];
    for(i=0;i<n;i++)
    scanf("%d",&input[i]);
    for(i=0;i<=k;i++)
    count[i]=0;
    for(j=0;j<n;j++)
    count[input[j]]+=1;
    for(j=0;j<=k;j++)
    printf("%d ",count[j]);
    for(i=0;i<=k;i++) {
        for(j=1;j<=count[i];j++) {
        output[t]=count[i];
        t++; } }
    return 0; }