#include<stdio.h>
int main() {
    int n,k,arr[100],i,j,c=0;
    scanf("%d\n",&n);
    scanf("%d\n",&k);
    for(i=1;i<=n;i++) {
        scanf("%d",&arr[i]); }
   for(i=1;i<=(n+1-k);i++)
   { int k=arr[0],p;
      for(p=1;p<=(n+1-k);p++) {
     for(j=i;j<=(k+i-1);j++) {
       printf("%d",arr[j]); } }
     arr[i]=c;
     printf("\n"); }
    return 0; }