#include <stdio.h>
int main() {
   int n,k,i,j,temp;
   int a[100000];
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++) {
       for(j=i+1;j<n;j++) {
           if(a[j]>a[i]) {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp; } } }
   printf("%d",a[k-1]);
    return 0; }