#include<stdio.h>
int main() {
    int n,k,i,j;
    scanf("%d %d\n",&n,&k);
    int a[n],count[k+1],startindex[k+1],sorted[n];
    for(i=1;i<=k;i++){
    count[i]=0;
    startindex[i]=0; }
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]);
        count[a[i]]++; }
    for(i=1;i<=k;i++) {
        if(i==1)
        startindex[i]=0;
        startindex[i]=startindex[i-1]+count[i-1]; }
    for(i=1;i<=k;i++){
        int l=startindex[i];
        for(j=0;j<count[i];j++) {
            sorted[l]=i;
            l++; } }
    for(i=0;i<n;i++) {
        printf("%d ",sorted[i]); } }