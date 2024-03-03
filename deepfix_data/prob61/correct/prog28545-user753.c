#include<stdio.h>
int main() {
    int n,k,i,oldCount,total=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int ar[n],count[k],output[n];
    for(i=0;i<=n-1;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<=k-1;i++)
    count[i]=0;
    for(i=0;i<=n-1;i++) {
        count[ar[i]]+=1; }
    for(i=0;i<=k-1;i++) {
         oldCount = count[i];
         count[i] = total;
         total += oldCount; }
    for(i=0;i<=n-1;i++) {
         output[count[ar[i]]] = ar[i];
         count[ar[i]] += 1; }
    for(i=0;i<=n-1;i++)
    printf("%d ",output[i]);
    return 0; }