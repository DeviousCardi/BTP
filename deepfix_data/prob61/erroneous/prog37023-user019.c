#include<stdio.h>
int main() {
    int n,k,i;
    int a[k],count[k+1],startindex[k],sorted[n];
    for(i=1;i<=k;i++){
    count[i]=0;
    startindex[i]=0; }
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",a[i])
        count[a[i]]++; }
    for(i=0;i<k;i++) {
        if(count[i]!=0&&m==0){
        startindex[i]=0;
        m=1;
        continue; }
        startindex[i]=startindex[i-1]+count[i-1]; }
    for(i=0;i<k;i++){
        if(count[i]>0) {
            sorted[j]=a[i];
            count } } }