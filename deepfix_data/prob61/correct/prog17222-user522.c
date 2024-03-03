#include<stdio.h>
int main() {
    int k,n;
    scanf("%d %d",&n,&k);
    int A[n],count[k+1];
    for(int i=0;i<n;i++) {
        scanf("%d ",&A[i]); }
    for(int i=0;i<k;i++)
    count[k]=0;
    for(int i=0;i<n;i++) {
        count[A[i]]+=1; }
    for(int i=0;i<=k;i++)
    for(int j=0;j<count[i];j++) {
        if(count[i]!=0)
        printf("%d ",count[i]); }
    return 0; }