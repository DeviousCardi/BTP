#include<stdio.h>
int main() {
    int n,k,arr[100],i,j;
    scanf("%d\n",&n);
    scanf("%d\n",&k);
    for(i=1;i<=n;i++) {
        scanf("%d",&arr[i]); }
    for(i=1;i<=n;i++) {
     for(j=i;j<=(k+i-1);j++) {
       printf("%d",arr[j]); }
     printf("\n"); }
    return 0; }