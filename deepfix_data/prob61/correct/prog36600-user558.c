#include<stdio.h>
int main() {
    int n,k,i,j,total=0;
    scanf("%d %d",&n,&k);
    int a[n],count[k+1],oldcount;
    int output[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k+1;i++) {
        count[i]=0; }
    for(i=0;i<=k;i++) {
        for(j=0;j<n;j++) {
            if(a[j]==i)
            count[i]++; } }
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    for(j=0;j<n;j++) {
        output[count[a[j]]]=a[j];
        count[a[j]]++; }
    for(j=0;j<n;j++)
    printf("%d ",output[j]); }