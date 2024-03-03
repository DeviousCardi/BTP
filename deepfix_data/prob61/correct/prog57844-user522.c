#include<stdio.h>
int main() {
    int k,n;
    scanf("%d %d",&n,&k);
    int A[n],count[k+1];
    for(int i=0;i<n;i++) {
        scanf("%d ",&A[i]); }
    for(int i=0;i<=k;i++)
    count[i]=0;
     for(int i=0;i<=k;i++)
    printf("%d ",count[i]);
    for(int i=0;i<n;i++) {
        count[A[i]]+=1; }
    return 0; }