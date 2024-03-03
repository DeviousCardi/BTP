#include<stdio.h>
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int count[k+1];
    for(int i=0;i<=k;i++) {
        count[i]=0; }
    int a[n],output[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++) {
        count[a[i]]+=1; }
    int total=0;
    int oldCount;
    for(int i=0;i<=k;i++) {
        oldCount=count[i];
        count[i]=total;
        total+=oldCount; }
    for(int i=0;i<n;i++) {
        int x=a[i];
        output[count[x]]=x;
        count[x]+=1; }
    for(int i=0;i<n;i++) {
        printf("%d ",output[i]); }
    return 0; }