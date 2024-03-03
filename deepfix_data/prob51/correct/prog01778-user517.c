#include <stdio.h>
int main() {
   int n,k,i,j,a,b;
   scanf("%d %d",&n,&k);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]); }
   for(i=0;i<n;i++){
       a=arr[i];
       for(j=0;j<n;j++){
           if(arr[j]<a){
               a=arr[j];
               b=j; } }
       arr[i]=a;
       arr[b]=arr[i]; }
    return 0; }