#include <stdio.h>
int main() {
   int k,n,i,j,z;
   scanf("%d %d",&n,&k);
   int a[n];
   for(i=0;i<n;i++) {
       scanf("%d",&a[i]);
   };
   for(i=0;i<n;i++) {
       for(j=i+1;j<n;j++) {
           if(a[j]>a[i]) {
               z=a[i];
               a[i]=a[j];
               a[j]=z;
           };
       };
   };
   printf("%d",a[k-1]);
    return 0; }