#include<stdio.h>
int main() {
    int n,k,i,j,total=0,oldcount;
    scanf("%d%d",&n,&k);
    int arr[n],count[k+1],output[n];
    for(i=0;i<=k;i++) {
        count[i]=0; }
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        for(j=0;j<=k;j++) {
            if(arr[i]==j) {
                count[j]++;
                break; } } }
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    for(i=0;i<n;i++) {
        output[count[arr[i]]]=arr[i];
        count[arr[i]]++; }
    for(i=0;i<n;i++) {
        printf("%d ",output[i]); }
    return 0; }