#include <stdio.h>
int main() {
   int n,k,i,j,temp;
   int a[100000];
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++) {
       for(j=0;j<n;j++) {
           if(a[j]<a[i]) {
               temp=a[j];
               a[j]=a[i];
               a[i]=temp; } } }
 for(i=0;i<n;i++)
   printf("%d ",a[i]);
    return 0; }