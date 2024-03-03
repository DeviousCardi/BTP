#include <stdio.h>
int main() {
   int n,k,i,j,a,b,c;
   scanf("%d %d\n",&n,&k);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d ",&arr[i]); }
   for(i=0;i<n;i++){
       a=arr[i];
       c=i;
       for(j=i+1;j<n;j++){
           if(arr[j]<a){
               a=arr[j];
               b=j; } }
       arr[i]=a;
       arr[b]=arr[c]; }
   printf("%d",arr[n-k]);
    return 0; }