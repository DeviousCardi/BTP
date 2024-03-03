#include<stdio.h>
int main(); {
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int arr[n],count[k+1];
    for(i=0;i<=k;i++) {
        count[i]=0; }
    for(i=0;i<n;i++) {
        scanf("%d",arr[i]);
        for(j=0;j<=k;j++) {
            if(arr[i]==j) {
                count[j]++;
                break; } } }
    for(i=0;i<k;i++) {
        for(j=0;j<count[i];j++) {
            printf("%d ",i); } }
    return 0; }