#include<stdio.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int count[k+1];
    for(int i=0;i<k;i++)
    count[i]=0;
    int s[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&s[i]);
        count[s[i]]++; }
    int total=0;
    for(int i=0;i<k;i++) {
        int old =count[i];
        count[i]=total;
        total+=old; }
    count[k]=n+1;
    int output[n];
    for(int i=0;count[i]<=n;i++) {
        for(int j= count[i] ;j<count[i+1];j++) {
            output[j]= i;
            printf("%d ",i); } } }