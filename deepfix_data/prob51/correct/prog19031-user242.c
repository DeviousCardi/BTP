#include <stdio.h>
int main() {
   int n,k,i,j,min;
   long int temp;
   scanf("%d %d\n",&n,&k);
   long int a[n];
   for(i=0;i<n;i++){
       scanf("%ld ",&a[i]); }
   for(i=0;i<n;i++){
       min=i;
       for(j=i+1;j<n;j++){
           if(a[j]>a[min]){
               j=min;
               temp=a[i];
               a[i]=a[min];
               a[min]=temp; } } }
   printf("\n%ld",a[n-k]);
    return 0; }