#include<stdio.h>
int main() {
    int n,k,i,j,total=0;
    scanf("%d %d",&n,&k);
    int a[n],count[n],oldcount;
    int output[100];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++) {
        for(j=0;j<n;j++) {
            if(i==a[j])
            count[i]++; } }
    for(i=0;i<k;i++) {
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    for(i=0;i<n;i++) {
        output[count[i]]=i;
        count[i]++; }
    for(i=0;i<total;i++)
    printf("%d",output[i]); }