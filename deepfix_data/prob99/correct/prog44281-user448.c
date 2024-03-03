#include<stdio.h>
int main() {
   int i,j,n,count=0,max;
   scanf("%d",&n);
   int a[n],b[n];
   for(i=0;i<n;i++){
       scanf("%d",&a[i]); }
   for (i=0;i<n;i++){
       for (j=i;j<n;j++){
           if (a[j]>a[i]){
               count++; } }
       b[i]=count;
       count=0; }
   max=b[0];
   for (i=0;i<n;i++){
       if (max<b[i]){
           max=b[i]+1; } }
   printf("%d",max);
    return 0; }