#include<stdio.h>
int main() {
    int n,k,i,oldcount,total,j;
    scanf("%d %d",&n,&k);
    int input[n],count[k+1],output[n];
    for(i=0;i<n;i++) {
        scanf("%d",&input[i]); }
    for(i=0;i<n;i++) {
        count[input[i]]++; }
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    i=0;
    while(i<n) {
        output[count[input[i]]]=input[i];
        count[input[i]]++;
        i++; }
    for(i=0;i<n;i++) {
        printf("%d ",output[i]); }
    return 0; }