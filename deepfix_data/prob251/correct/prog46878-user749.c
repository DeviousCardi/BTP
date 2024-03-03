#include <stdio.h>
#include <stdlib.h>
int mon[3]={1,3,5};
long *memarray[3];
long getways(int x, int m) {
   long count;
   if(m==1){ }
   return count; }
int main() {
   int n,i,j;
   scanf("%d",&n);
   for(i=0;i<3;i++){
       memarray[i]=(long*)malloc(n*sizeof(long)); }
   for(i=0;i<3;i++){
       for(j=0;j<n;j++){
           memarray[i][j]=-1; } }
   printf("%d",getways(n,3));
    return 0; }