#include<stdio.h>
int main() {
    int n,k,i,oldcount,total;
    scanf("%d %d",&n,&k);
    int input[n],count[k+1],output[n];
    for(i=0;i<n;i++) {
        scanf("%d",&input[i]); }
    for(i=0;i<=k;i++) {
        count[i]=0;
        printf("%d ",count[i]); }
    for(i=0;i<n;i++) {
        count[input[i]]++; }
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    for(i=0;i<n;i++) {
        output[count[input[i]]]=input[i];
        count[input[i]]++; }
    return 0; }