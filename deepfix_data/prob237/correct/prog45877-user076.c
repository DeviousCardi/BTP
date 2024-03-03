#include<stdio.h>
int main() {
    int n,k,arr[100],i,j,c=0;
    scanf("%d\n",&n);
    scanf("%d\n",&k);
    for(i=1;i<=n;i++) {
        scanf("%d",&arr[i]); }
    for(i=1;i<=(n+1-k);i++)
        printf("%d",arr[i]);
    return 0; }