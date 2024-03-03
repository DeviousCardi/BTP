#include<stdio.h>
int main() {
    int n,k,i,arr[10000],ar[1000];
    scanf("%d %d ",&n,&k);
    for(i=0;i<=k;i++) {
        ar[i]=i;
        scanf("%d ",&ar[i]); }
    for(i=0;i<=k;i++) {
        printf("%d ",ar[i]); }
    return 0; }