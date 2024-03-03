#include <stdio.h>
int main(){
   int n,i,c,j;
   scanf("%d",&n);
   int x[i];
   for(i=0;i<100;i++)
   x[i]=0;
   for(i=0;i<n;i++) {
       scanf("%d",&c);
       x[c]=x[c]+1; }
   for(i=0;i<100;i++) {
       for(j=0;j<x[i];j++)
       printf("%d",i); }
    printf("end");
    return 0; }