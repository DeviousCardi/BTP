#include<stdio.h>
int main() {
    int n,k,i;
    scanf("%d",&n);
    scanf("%d",&k);
    int ar[n],count[k];
    for(i=0;i<=n-1;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<=k-1;i++)
    count[i]=0;
    for(i=0;i<=n-1;i++) {
        count[ar[i]]+=1; }
    for(i=0;i<=k-1;i++)
    printf("%d\n",count[i]);
    return 0; }