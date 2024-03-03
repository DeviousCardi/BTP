#include<stdio.h>
int main() {
    int n,k,i,oldcount,total,index=0,j;
    scanf("%d %d",&n,&k);
    int input[n],count[k+1],output[n];
    for(i=0;i<n;i++) {
        scanf("%d",&input[i]); }
    for(i=0;i<=k;i++) {
        count[i]=0; }
    for(i=0;i<n;i++) {
        count[input[i]]++; }
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    i=0;
    x=0;
    while(i<n&&x<k) {
        for(j=count[x];j<count[x+1];j++) {
            output[i]=x;
            i++; }
        x++; }
    for(i=0;i<n;i++) {
        printf("%d ",output[i]); }
    return 0; }