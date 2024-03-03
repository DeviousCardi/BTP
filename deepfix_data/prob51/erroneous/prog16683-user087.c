#include <stdio.h>
int main() {
   int n,k;
   scanf("%d %d\n",&n,&k);
   for(i=0;i<n;i++) {
       scanf("%d ",&a[i]); }
   int i,j;
   for(i=0;i<n;i++) {
       for(j=i+1;j<n;j++) {
           if(a[j]<a[i])
           {   int temp=a[i];
               a[i]=a[j];
               a[j]=temp; } } }
   for(i=0;i<n;i++) {
       printf("%d",a[i]); }
    return 0; }