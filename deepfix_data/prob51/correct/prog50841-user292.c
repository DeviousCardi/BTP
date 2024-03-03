#include <stdio.h>
int main() {
   int n,k;
   scanf("%d",&n);
   scanf("%d",&k);
   int grid[n];
   int i,j,t;
   for(i=0;i<n;i++) {
       scanf("%d",&grid[i]); }
   for(i=0;i<n;i++) {
       for(j=0;j<n-1;j++) {
           if(grid[j]<grid[j+1]) {
               t=grid[j];
               grid[j]=grid[j+1];
               grid[j+1]=t; } } }
   printf("%d",grid[k-1]);
    return 0; }